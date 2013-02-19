#include <iostream>

using namespace std;

int main()
{
	const int METRIC_TON = 2205;

	float riceBag = 0;
	float numBags = 0;

	cout<<"Enter the number of pounds in the rice bag."<<endl;
	cin>>riceBag;

	numBags = METRIC_TON/riceBag;

	cout<<"The number of bags needed for a metric ton is "<<numBags<<endl;



	return 0;
}
