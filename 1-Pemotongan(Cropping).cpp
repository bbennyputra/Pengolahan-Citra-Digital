#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("D:/testing.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat img1(img.size(), img.type());
	int x1, y1, x2, y2;
	cout << "Masukkan nilai x1 : ";
 	cin >> x1;
	cout << "Masukkan nilai y1 : ";
 	cin >> y1;
	cout << "Masukkan nilai x2 : ";
 	cin >> x2;
	cout << "Masukkan nilai y2 : ";
 	cin >> y2;
	int i = 1;
	for (int x = x1; x < x2; x++){
		int j = 1;
		for (int y = y1; y < y2; y++){
			img1.at<uchar>(i, j) = img.at<uchar>(x, y);
			j = j + 1;
		}
		i = i + 1;
	}
	namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	imshow("Original Image", img);
	namedWindow("Cropped Image", CV_WINDOW_AUTOSIZE);
	imshow("Cropped Image", img1);
	waitKey(0);
	return 0;
}
