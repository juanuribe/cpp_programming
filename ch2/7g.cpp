//include statements
#include <iostream>
#include <string>

//using namespace statement
using namespace std;

int main()
{
	const int SECRET = 11;
	const double RATE = 12.50;
	
	int num1, num2, newNum;
	string name;
	
	double hoursWorked, wages;

	cout<<"Please enter two integers."<<endl;
	cin>>num1>>num2;

	cout<<"The value of num 1 is "<<num1<<" and value of num2 is "<<num2<<endl;
	
	newNum = 2*num1+num2;
	
	cout<<"The value of newNum = "<<newNum<<endl;	

	newNum += SECRET;
	cout<<"The updated value of newNum is " <<newNum<<endl;
	
	return 0;	

}
