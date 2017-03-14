#include "CImg.h"
#define TESTDLL_API __declspec(dllexport)	
#include <iostream>
#include <cstdlib> 
#include <string>
#include<conio.h>
using namespace std;

extern "C" {
	//TESTDLL_API void workflow();
	TESTDLL_API void displaypolygon();
	TESTDLL_API void drawcircle();
	TESTDLL_API void markpoint();
}
