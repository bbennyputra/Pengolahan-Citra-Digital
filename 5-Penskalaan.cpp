#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	cout << "Operasi Penskalaan" << endl;
	cout << "---------------------------" << endl;
	Mat img = imread("D:\\fotoformal.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat img1(img.size(), img.type());
	int i = 1, j = 1;
	int h = img.size().width;
	int w = img.size().height;
	for (int x = 0; x < h; x++){
		for (int y = 0; y < w; y++){
			img1.at<uchar>(i, j) = img.at<uchar>(x, y);
			img1.at<uchar>(i, j + 1) = img.at<uchar>(x, y);
			img1.at<uchar>(i + 1, j) = img.at<uchar>(x, y);
			img1.at<uchar>(i + 1, j + 1) = img.at<uchar>(x, y);
		}
		i = i + 2;
		j = 1;
	}
	namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	namedWindow("Zoom In Image", CV_WINDOW_AUTOSIZE);
	imshow("Original Image", img);
	imshow("Zoom In Image", img1);
	waitkey(0);
	return 0;
}