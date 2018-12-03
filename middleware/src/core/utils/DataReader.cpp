#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <ros/ros.h>
#include "DataReader.h"


DataReader::DataReader(void){
    std::cout << "/* message */" << '\n';
}

cv::Mat DataReader::readRGBImage(std::string imagePath){

    cv::Mat image;
    image = cv::imread(imagePath);
    
    return image;
}

cv::Mat DataReader::readDepthImage(std::string imagePath){
    cv::Mat image;
    image = cv::imread(imagePath);
    
    return image;
}

