#include <iostream>

using namespace std;

int main()
{
	float num1,num2,num3,num4,num5;
	float total;

	cout<<"Please enter five decimal numbers."<<endl;
	cin>>num1>>num2>>num3>>num4>>num5;

	total = num1+num2+num3+num4+num5;
		
	cout<<"The total of the decimal numbers is "<<static_cast<int>(total)<<endl;

	return 0;
}
