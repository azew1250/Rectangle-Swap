#include "Rectangle.h"

void swapByReference(Rectangle &r1, Rectangle &r2)
{
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;
}

void swapByPointer(Rectangle *r1, Rectangle *r2)
{
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
}

int main()
{
	double w1, w2, h1, h2;
	cin >> w1 >> h1 >> w2 >> h2;

	Rectangle r1(w1, h1);
	Rectangle r2(w2, h2);

	cout << fixed << setprecision(2);
	cout << "swapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
	swapByReference(r1, r2);
	cout << r1.getArea() << " " << r2.getArea() << endl;

	cout << fixed << setprecision(2);
	cout << "swapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
	swapByPointer(&r1, &r2);
	cout << r1.getArea() << " " << r2.getArea() << endl;
	system("pause");
}