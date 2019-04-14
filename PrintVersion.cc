#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv)
{
    printf("OpenCV Version: ");
    printf("%s\r\n", CV_VERSION);
    printf("%u.%u.%u\r\n", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION);

    return 0;
}