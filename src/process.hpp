#ifndef PROCESS_HPP
#define PROCESS_HpP

#include <opencv2/opencv.hpp>
#include <vector>

typedef unsigned int uint;

class Process {
 private:
  cv::Mat img, kernel;

 public:
  Process(const cv::Mat&);
  void filter_frame(cv::Mat&);
  int get_contours(const uint, const uint,
                   std::vector<std::vector<cv::Point>>&);
};

#endif /* PROCESS_HPP */
