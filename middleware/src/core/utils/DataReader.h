

/*

- Take in folder location for RGB and depth images
- Take in file locations for accelerometer and groundtruth pose
- Open files as a stream and load them
- Pass them to elastic fusion


*/

#include <opencv2/core.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <ros/ros.h>

using namespace cv;
using namespace std;
using namespace ros;



class DataReader{
    public:
        cv::Mat readRGBImage(String);
        cv::Mat readDepthImage();
        DataReader();

    private:
        int j;
};
