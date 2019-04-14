# Description
A simple program to test if OpenCV is installed properly

# Demo
```bash
cd <project root>
mkdir build
cd build
cmake ..
make
./PrintVersion                   # print opencv version
./DisplayImage ../example.jpg    # display an image
```

# Some of the Errors I Encounted
- C++ Error
Error message:
```bash
[ 50%] Building CXX object CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o
In file included from /usr/local/include/opencv4/opencv2/core.hpp:52:0,
                 from /usr/local/include/opencv4/opencv2/opencv.hpp:52,
                 from /mnt/d/YanBC/OneDrive/Desktop/sidejobs/opencv/DisplayImage.cpp:2:
/usr/local/include/opencv4/opencv2/core/cvdef.h:656:4: error: #error "OpenCV 4.x+ requires enabled C++11 support"
 #  error "OpenCV 4.x+ requires enabled C++11 support"
```

solution: https://stackoverflow.com/questions/37621342/cmake-will-not-compile-to-c-11-standard

- Variable Not Exist (CV_RETR_EXTERNAL, CV_BGR2GRAY, CV_CHAIN_APPROX_NONE, etc)

solution: https://stackoverflow.com/questions/23922620/open-cv-not-loading-correctly
