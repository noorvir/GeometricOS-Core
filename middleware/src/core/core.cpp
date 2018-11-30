/*
 * 
 */
// #include <ElasticFusion.h>
#include "utils/DataReader.h"

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

// using namespace cv;

int main(int argc, char const *argv[])
{
    /*
     *  load rgb and depth images
     *  process images with elastic fusion 
     * 
     * 
     */
    
    Mat image;
    String imgPath = "/home/noorvir/Documents/data/rgbd_dataset_freiburg1_xyz/rgb/1305031102.175304.png";
    DataReader dataReader;

    image = dataReader.readRGBImage(imgPath);

    cv::namedWindow("RGB Image", WINDOW_AUTOSIZE);

    cv::imshow("RGB Image", image);
    cv::waitKey(0);
    // Resolution::getInstance(640, 480);
    // Intrinsics::getInstance(528, 528, 320, 240);
    
    // pangolin::Params windowParams;
    // windowParams.Set("SAMPLE_BUFFERS", 0);
    // windowParams.Set("SAMPLES", 0);
    
    // pangolin::CreateWindowAndBind("Main", 1280, 800, windowParams);

    // for(int i = 0; i < 100; i++)
    // {
    //     /* code */
    // }
    
    return 0;
}
