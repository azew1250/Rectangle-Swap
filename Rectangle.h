#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
private:
	double width, height;
public:
	Rectangle(double,double);
	void setWidth(double);
	void setHeight(double);
	double getArea();
};
#endif