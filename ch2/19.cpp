#include <iostream>

using namespace std;

int main()
{
	const float sizCarton = 3.78;
	const float costCarton = 0.38;
	const float profPerCarton = 0.27;

	float liters = 0;
	int numCarton = 0;
	float totCost = 0;
	float totProfit = 0;

	cout<<"Please enter the total number of liters produced in milk."<<endl;
	cin>>liters;

	numCarton = liters/sizCarton;
	totCost = costCarton*numCarton;
	totProfit = profPerCarton*numCarton;

	cout<<"The total number of cartons to hold the milk needed is "<<numCarton<<endl;
	cout<<"The cost of producing the milk is "<<totCost<<endl;
	cout<<"The total profit for producing the milk is "<<totProfit<<endl;


	return 0;
}
