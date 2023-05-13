#include <opencv2/opencv.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	Mat M(2,2, CV_8UC3, Scalar(0,0,255));
    cout << "M = " << endl << " " << M << endl << endl;
	return 0;
}
