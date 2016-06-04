#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	cout << "Operasi Translasi" << endl;
	cout << "----------------" << endl;
	Mat img = imread("D:\\fotoformal.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat img1(img.size(), img.type());
	int b = 30, k = 25;
	int n = img.size().width;
	int m = img.size().height;
	for (int x = 0; x < n; x++){
		int x1 = x + b;
		if (x1 > n){
			continue;
		}
		for (int y = 0; y < m; y++){
			int y1 = y + k;
			if (y1 > m){
				continue;
			}
			img.at<uchar>(x, y) = img.at<uchar>(x1, y1);
		}
	}
	namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	namedWindow("Translasi Image", CV_WINDOW_AUTOSIZE);
	imshow("Original Image", img);
	imshow("Translasi Image", img1);
	waitKey(0);
	return(0);
}
