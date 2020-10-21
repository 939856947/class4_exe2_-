#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
int main()
{


	cv::Mat disMat = imread("D:\\333.jpg");
	Mat disMat_gray;//彩色图像转化成灰度图  
	Mat disMat_erzhi;
	Mat disMat_label;
	Mat labels;
	Mat stats;
	Mat	centroids;
	cv::Rect rect1;
	cv::Rect rect2;
	cv::Rect rect3;
	cv::Rect rect4;
	cv::Rect rect5;
	cv::Rect rect6;
	cv::Rect rect7;
	cv::Rect rect8;
	cv::Rect rect9;
	cv::Rect rect10;
	int num;
	int i;
	int j;
	cvtColor(disMat, disMat_gray, COLOR_BGR2GRAY);//转化为灰度图
	threshold(disMat_gray, disMat_erzhi, 100, 255, THRESH_BINARY);//二值化
	//Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));//内核	
	num = connectedComponentsWithStats(disMat_erzhi, disMat_label, stats, centroids, 8, CV_32S);
	cout << "num=" << num-1 << endl;
	cout << "" << stats << endl;
	cout << "" << centroids << endl;
	rect1.x = 348;
	rect1.y = 13;
	rect1.width = 177;
	rect1.height = 168;
	rectangle(disMat_erzhi, rect1, CV_RGB(0, 0, 233), 1, 8, 0);

	rect2.x = 82;
	rect2.y = 72;
	rect2.width = 152;
	rect2.height = 144;
	rectangle(disMat_erzhi, rect2, CV_RGB(0, 0, 233), 1, 8, 0);
	
	rect3.x = 553;
	rect3.y = 122;
	rect3.width = 177;
	rect3.height = 169;
	rectangle(disMat_erzhi, rect3, CV_RGB(0, 0, 233), 1, 8, 0);
	
	rect4.x = 245;
	rect4.y = 179;
	rect4.width = 150;
	rect4.height = 143;
	rectangle(disMat_erzhi, rect4, CV_RGB(0, 0, 233), 1, 8, 0);

	rect5.x = 10;
	rect5.y = 229;
	rect5.width = 182;
	rect5.height = 173;
	rectangle(disMat_erzhi, rect5, CV_RGB(0, 0, 233), 1, 8, 0);

	rect6.x = 712;
	rect6.y = 230;
	rect6.width = 154;
	rect6.height = 146;
	rectangle(disMat_erzhi, rect6, CV_RGB(0, 0, 233), 1, 8, 0);

	rect7.x = 426;
	rect7.y = 270;
	rect7.width = 179;
	rect7.height = 172;
	rectangle(disMat_erzhi, rect7, CV_RGB(0, 0, 233), 1, 8, 0);

	rect8.x = 188;
	rect8.y = 348;
	rect8.width = 182;
	rect8.height = 174;
	rectangle(disMat_erzhi, rect8, CV_RGB(0, 0, 233), 1, 8, 0);

	rect9.x = 622;
	rect9.y = 444;
	rect9.width = 155;
	rect9.height = 147;
	rectangle(disMat_erzhi, rect9, CV_RGB(0, 0, 233), 1, 8, 0);

	rect10.x = 259;
	rect10.y = 535;
	rect10.width = 184;
	rect10.height = 179;
	rectangle(disMat_erzhi, rect10, CV_RGB(0, 0, 233), 1, 8, 0);
	imshow("erzhi", disMat_erzhi);
	waitKey(0);
	return 0;

}