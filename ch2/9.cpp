#include <iostream>

using namespace std;

int main()
{
	float test1 = 0;
	float test2 = 0;
	float test3 = 0;
	float test4 = 0;
	float test5 = 0;
	float avg = 0;

	cout<<"Please enter your five test scores."<<endl;
	cin>>test1>>test2>>test3>>test4>>test5;

	avg = (test1+test2+test3+test4+test5)/5.0;

	cout<<"The average test score is "<<avg<<"."<<endl;

	return 0;
}
