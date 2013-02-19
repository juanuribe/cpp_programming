#include <iostream>

using namespace std;


int main()
{
	int elapTime;
	const int HOURS = 3600;
	const int MINS = 60;

	int hours=0;
	int mins=0;
	int secs=0;
	
	cout<<"Please enter the elapsed time in seconds."<<endl;
	cin>>elapTime;

	hours = (elapTime/HOURS);
	mins = (elapTime%HOURS)/MINS;
	secs = (elapTime%HOURS)%MINS;

	cout<<"The elapsed time is "<<hours<<":"<<mins<<":"<<secs<<endl;


	return 0;
}
