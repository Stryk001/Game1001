//calculate the area of a rectangle
#include <iostream>;
using namespace std;

int main()
{
	int  length, width, area;

	cout << "The programe calculates the area of the rectangle.\n";

	cout << "what is the length of the rectangle (as an integer)?\n";
	cin >> length;
	cout << "What is the width of the rectangle (as an integer)?\n";
	cin >> width;

	area = length * width;

	cout << "The area of the rectangle is " << area;

	return 0;

}