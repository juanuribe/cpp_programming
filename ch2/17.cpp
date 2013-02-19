#include <iostream>

using namespace std;

int main()
{
	int yards=0;
	int feet=0;
	int inch=0;
	int length;

	const int FOOT = 36;	//inches per yard
	const int INCH = 12;	//inches per foot	
	const int CONV = 30;	//30 centimers per foot:12 inches
	const int IN2CM= 12;
	
	cout<<"Enter the length in centimeters."<<endl;
	cin >>length;

	yards = length*INCH/CONV/FOOT; //Get the yards
	cout<<yards<<" yard(s),";
	
	feet = ((length*INCH/CONV)%FOOT)/INCH;
	cout<<feet<<" feet(foot), ";

	inch = (((length*INCH/CONV)%FOOT)%INCH);
	cout<<inch<<" inch(es)."<<endl;




	return 0;

}
