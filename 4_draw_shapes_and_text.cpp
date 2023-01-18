#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
	Draw Shapes and Text
*/

void main() {
	
	// Blank image
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255)); // white image
	//Mat img(512, 512, CV_8UC3, Scalar(255, 0, 255)); // purple image
	//Mat img(512, 512, CV_8UC3, Scalar(0, 0, 0)); // black image

	circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED); // orange circle with white background
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
	line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);

	putText(img, "Opencv Works", Point(140, 270), FONT_HERSHEY_DUPLEX, 1, Scalar(0,0,0),2); // text in image

	imshow("Image", img);
	waitKey(0);
}
