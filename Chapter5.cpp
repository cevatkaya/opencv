#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//Warp Images

float w = 250, h = 300;
Mat matrix, imgWarp;

void main() {

	string path = "resources/uno.jpg";
	Mat img = imread(path);  //matrix data type

	Point2f src[4] = { {105,326},{214,220},{266,504},{380,400} };
	Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };

	matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, imgWarp, matrix, Point(w, h));

	for (int i = 0;i < 4; i++) {

		circle(img, src[i], 10, Scalar(0, 0, 0), FILLED); 

	}

	imshow("Image", img);
	imshow("Image Warp", imgWarp);
	waitKey(0);
}