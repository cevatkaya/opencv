#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// Basic Functions

void main() {

	string path = "resources/tesla.jpg";
	Mat img = imread(path);  //matrix data type
	Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
	Canny(imgBlur, imgCanny, 25, 75);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(imgCanny, imgDil, kernel);
	erode(imgDil, imgErode, kernel);

	imshow("Image", img); //orginal picture
	imshow("Image Gray", imgGray); //gray picture
	imshow("Image Blur", imgBlur); //blurry picture
	imshow("Image Canny", imgCanny); //canny picture
	imshow("Image Dialtaion", imgDil); 
	imshow("Image Erode", imgErode); 
	waitKey(0);
}
