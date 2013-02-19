#include <iostream>

using namespace std;

int main()
{
	//Constants
	const float TAXRATE = .14;
	const float CLOTHESPCT = 0.10;	
	const float BONDSPCT = 0.25;
	const float PARBONDS = 0.50;

	//Variables
	float netIncome = 0;
	int hours =0;
	float salary = 0;
	float payRate = 0;
	float clotheSpent = 0;
	float bonds =0;
	int bondsParents;

	cout<<"Enter the hours worked each week and the payrate."<<endl;
	cin>>hours>>payRate;

	salary = hours*payRate;
	netIncome = salary*(1-TAXRATE);
	clotheSpent = netIncome*CLOTHESPCT;
	bonds = (netIncome-clotheSpent)*BONDSPCT;
	bondsParents = bonds*PARBONDS;


	cout<<"Your income before taxes is "<<salary<<endl;
	cout<<"Your income after taxes is "<<netIncome<<endl;
	cout<<"You spent $"<<clotheSpent<<" on clothes and accesories."<<endl;
	cout<<"You spent $"<<bonds<<" to buy savings bonds"<<endl;
	cout<<"Your parents spent $"<<bondsParents<<" to buy you savings bonds."<<endl;


	return 0;
}
