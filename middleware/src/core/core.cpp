/*
 * 
 */
#include <ElasticFusion.h>
#include "utils/DataReader.h"


#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <dirent.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*
     *  load rgb and depth images
     *  process images with elastic fusion 
     * 
     * 
     */
    
    cv::Mat rgbImage;
    cv::Mat depthImage;
    DataReader dataReader;

    std::string rgbDirPath = "/home/noorvir/Documents/data/rgbd_dataset_freiburg1_xyz/rgb/";
    std::string depthDirPath = "/home/noorvir/Documents/data/rgbd_dataset_freiburg1_xyz/depth/";
    std::string rgbPath;
    std::string depthPath;

    DIR *rgbDir;
    DIR *depthDir;

    struct dirent *rgbName;
    struct dirent *depthName;

    rgbDir = opendir(rgbDirPath.c_str());
    depthDir = opendir(depthDirPath.c_str());

    if ((depthDir == NULL) || (rgbDir == NULL)){
        perror("Falied to open directory\n");
    }

    cv::namedWindow("RGB Image", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Depth Image", cv::WINDOW_AUTOSIZE);

    for(int i = 0; i < 100; i++)
    {
        // get pointer to next file
        rgbName = readdir(rgbDir);
        depthName = readdir(depthDir);

        if ((rgbName == NULL) || depthName == NULL) break;

        if ((std::strcmp(rgbName->d_name, ".") != 0) && 
                (std::strcmp(rgbName->d_name, "..") != 0)){
            rgbPath = rgbDirPath + std::string(rgbName->d_name);
            rgbImage = dataReader.readRGBImage(rgbPath);
            cv::imshow("RGB Image", rgbImage);
        }

        if ((std::strcmp(depthName->d_name, ".") != 0) && 
                (std::strcmp(depthName->d_name, "..") != 0)){
            depthPath = depthDirPath + std::string(depthName->d_name);
            depthImage = dataReader.readDepthImage(depthPath);
            cv::imshow("Depth Image", depthImage);
        }
        cv::waitKey(100);
    }

    closedir(depthDir);
    closedir(rgbDir);
    // Resolution::getInstance(640, 480);
    // Intrinsics::getInstance(528, 528, 320, 240);
    
    // pangolin::Params windowParams;
    // windowParams.Set("SAMPLE_BUFFERS", 0);
    // windowParams.Set("SAMPLES", 0);
    
    // pangolin::CreateWindowAndBind("Main", 1280, 800, windowParams);

    
    
    return 0;
}
