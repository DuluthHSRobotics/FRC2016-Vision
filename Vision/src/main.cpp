#include <iostream>
#include <opencv2/opencv.hpp>
#include "networktables/NetworkTable.h"

class Vision
{
public:
    std::shared_ptr<NetworkTable> table;

    Vision(void) {
        table = NetworkTable::GetTable("vision");
        table->PutNumber("X", 5);
    }
};

int main(int argc, const char* argv[])
{
    Vision vision;
    
    cv::VideoCapture capture(0);
    cv::Mat frame;
    
    cv::namedWindow("w", 1);
    
    while (true) {
        if (!capture.read(frame)) break;
        cv::imshow("w", frame);
        cv::waitKey(20); // waits to display frame
    }
    
    cv::waitKey(0);
    
    std::cin.ignore();
}
