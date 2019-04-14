cmake_minimum_required(VERSION 2.8)
SET(CMAKE_CXX_FLAGS "-std=c++11" CACHE STRING "Sepecify C++11 Standard")
find_package( OpenCV REQUIRED )

project( DisplayImage )
add_executable( DisplayImage DisplayImage.cc )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )

project ( PrintVersion )
add_executable( PrintVersion PrintVersion.cc )
target_link_libraries( PrintVersion ${OpenCV_LIBS} )