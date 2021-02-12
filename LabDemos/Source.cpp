//calculate the area of a rectangle
#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	const double PI = 3.13159;
	double area, radius;

	cout << "This programe will calculate the area of a circle.\n";

	cout << "What is the radius of the circle?\n";
	cin >> radius;

	area = PI * pow(radius, 2);
	cout << "The area of the circle is " << area << endl;

	return 0;

}