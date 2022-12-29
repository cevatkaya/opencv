#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//Images


void main() {

	string path = "resources/tesla.jpg";
	Mat img = imread(path);  //matrix data type

	cvtColor(img, imgGray, COLOR_BGR)

	imshow("Image", img);
	waitKey(0);
}

