
#include "Header.h"
using namespace cimg_library;
using namespace std;

extern "C" {
	void displaypolygon() {
		int i;
		float red[] = { 1.0f,0.0f,0.0f };
		//Give the desired path of the image
		CImg<unsigned char> img("D:/3-2/gsoc'17/CImg-2.0.0_pre030217/lena.jpg");
		//4 = n, n = number of sides of a polygon 
		CImg<int> points(4, 2);
		// Define the vertices coordinates here; {x0, y0, x1, y1, x2, y2 ....}
		int thePoints[8] = { 150,150,150,200,200,200,200,150 };
		int *iterator = thePoints;
		cimg_forX(points, i) { points(i, 0) = *(iterator++); points(i, 1) = *(iterator++); }
		img.draw_polygon(points, red).display();
	}

	void drawcircle()
	{
		float red[] = { 1.0f,0.0f,0.0f };
		//Give the desired path of the image
		CImg<unsigned char> img("D:/3-2/gsoc'17/CImg-2.0.0_pre030217/lena.jpg");
		img.draw_circle(256, 256, 70 , red, 1).display();
	}

	void markpoint() {
		float red[] = { 1.0f,0.0f,0.0f };
		//Give the desired path of the image
		CImg<unsigned char> img("D:/3-2/gsoc'17/CImg-2.0.0_pre030217/lena.jpg");
		img.draw_circle(256, 256, 0, red, 1).display();
	}
}

