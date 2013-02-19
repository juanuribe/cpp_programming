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


//	cout<<"Please enter two integers."<<endl;
//	cin>>num1>>num2;

//	cout<<"The value of num 1 is "<<num1<<" and value of num2 is "<<num2<<endl;
	
//	newNum = 2*num1+num2;
	
//	cout<<"The value of newNum = "<<newNum<<endl;	

//	newNum += SECRET;
//	cout<<"The updated value of newNum is " <<newNum<<endl;

	cout<<"Please enter your last name"<<endl;
	cin>>name;

	cout<<"Please enter the amount of hours worked this week. (A number between 0 and 70)"<<endl;
	cin>>hoursWorked;

	wages = RATE*hoursWorked;

	cout<<"Name: "<<name<<endl;
	cout<<"Pay Rate: $"<<RATE<<endl;
	cout<<"Hours Worked: "<<hoursWorked<<endl;
	cout<<endl<<"Salary: $"<<wages<<endl;
	
	return 0;	

}
