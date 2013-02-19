#include <iostream>

using namespace std;

int main()
{
	int length = 0;
	int width = 0;
	int area = 0;
	int perimeter = 0;

	cout<<"Please enter the length and width of the rectangle."<<endl;
	cin >> length >> width;

	area = length * width;
	perimeter = 2*length + 2*width;
	
	cout<<"The rectangle's area is "<<area<<" and the perimeter is "<<perimeter<<endl;

	return 0;
}
