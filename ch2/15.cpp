#include <iostream>

using namespace std;

int main()
{
	int hours, mins, secs;

	cout<<"Please input the time in hours, minutes and seconds."<<endl;
	cin>>hours>>mins>>secs;

	cout<<"The elapsed time in seconds is "<<(3600*hours)+(60*mins)+secs<<endl;

	return 0;


}
