#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
	Resize and Crop
*/

void main()  {

	string path = "resources/tesla.jpg";
	Mat img = imread(path);  //matrix data type
	Mat imgResize, imgCrop;

	//cout << img.size() << endl;
	resize(img, imgResize, Size(640,480)); //resize image

	Rect roi(400, 400, 300, 450);
	imgCrop = img(roi); //crop image

	imshow("Image", img); //original image
	imshow("Image Resize", imgResize); 
	imshow("Image Crop", imgCrop); 

	waitKey(0);
}
