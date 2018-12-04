#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <ros/ros.h>
#include "DataReader.h"


DataReader::DataReader(void){
    ros::ini
    std::cout << "/* message */" << '\n';
}

/**
 * @brief 
 * 
 * @param dirPath 
 */
void DataReader::readFromDirectory(std::string dirPath){

}

/**
 * @brief 
 * 
 */
void DataReader::getNext(){

}

bool DataReader::hasMore(){
    return 1
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

