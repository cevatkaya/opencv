#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/* 
	Images
/*

/*
void main() {
	
	string path = "resources/tesla.jpg";
	Mat img = imread(path);  //matrix data type
	imshow("Image", img);
	waitKey(0);
}
*/

// Video

/*
void main() {

	string path = "resources/tesla_driving.mp4";
	VideoCapture cap(path);
	Mat	img;

	while (true) {
		cap.read(img);
		imshow("Image", img);
		waitKey(20);
	}
}
*/

// Webcam

void main() {
	
	VideoCapture cap(0); //you have one cam select 0, if you have more cam select 1
	Mat	img;

	while (true) {
		
		cap.read(img);
		imshow("Image", img);
		waitKey(1);
	}
}
