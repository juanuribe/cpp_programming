#include <iostream>

using namespace std;

int main()
{
	int qCount = 0;
	int dCount = 0;
	int nCount = 0;

	float nickels = 0.05;
	float dimes = 0.10;
	float quarters = 0.25;

	float total = 0;

	cout<<"Enter the total number of quarters"<<endl;
	cin >> qCount;
	
	cout<<"Enter the total number of dimes."<<endl;
	cin >> dCount;

	cout<<"Enter the total number of nickels."<<endl;
	cin >> nCount;

	total = quarters*qCount+dimes*dCount+nickels*nCount;

	cout<<"The total value of coins is "<<total<<endl;


	return 0;
}
