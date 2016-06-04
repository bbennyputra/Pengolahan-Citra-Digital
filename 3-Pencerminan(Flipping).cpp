#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	int h, w;
	cout << "Operasi Flipping Horizontal" << endl;
	cout << "---------------------------" << endl;
	Mat img = imread("D:\\fotoformal.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat img1(img.size(), img.type());
	h = img.size().width;
	w = img.size().height;
	cout << h << endl;
	cout << w << endl;
	for (int x = 0; x < h; x++){
		for (int y = 0; y < w; y++){
			img1.at<uchar>(x, w + 1 - y) = img.at<uchar>(x, y);
		}
	}
	namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	namedWindow("CroppingImage", CV_WINDOW_AUTOSIZE);
	imshow("Original Image", img);
	imshow("Cropping Image", img1);
	waitkey(0);
	return 0;
}