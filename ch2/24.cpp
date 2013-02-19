#include <iostream>

using namespace std;


int main()
{
	const float k = 6.67E-8;
	
	float m1, m2, distance, force;

	cout<<"Enter the masses of the 2 objects."<<endl;
	cin>>m1>>m2;

	cout<<"Enter the distance between the 2 objects."<<endl;
	cin>>distance;

	if (distance > 0){
		force = k*m1*m2/(distance*distance);
		cout<<"The force between the two bodies is "<<force<<endl;
	}
	else {
		cout<<"The distance must be greater than 0."<<endl;
	}

	return 0;
}
