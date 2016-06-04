#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <iostream>

using namespace cv;
using namespace std;

int main(){
	cout << "operasi rotasi" << endl;
	cout << "--------------" << endl;
	Mat img = imread("D:/testing.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat imgl = (img.size(), img.type());
	int n = img.size().width;
	int m = img.size().height;
	cout << n << " " << << endl;
	for (int x = 0; x < n; x++){
		int k = m;
		for (int y = 0; y < m; y++){
			imgl.at<uchar>(k, x) = img.at<uchar>(x, y);
			k = k - 1;
		}
	}
	namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	namedWindow("Rotating Image", CV_WINDOW_AUTOSIZE);
	imshow("Original Image", img);
	imshow("Rotating Image", img1);
	waitKey(0);
	return 0;
}