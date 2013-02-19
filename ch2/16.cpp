#include <iostream>

using namespace std;

int main()
{
	float ogPrice;
	float taxRate;
	float percMarkup;
	float salePrice;
	float salesTax;
	float finalPrice;

	cout<<"Please enter the original price of the item."<<endl;
	cin>>ogPrice;
	
	cout<<"Please enter the percentage of the marked-up price."<<endl;
	cin>>percMarkup;

	cout<<"Please enter the tax rate of the item."<<endl;
	cin>>taxRate;

	salePrice = ogPrice*(1+percMarkup);
	salesTax = salePrice*taxRate;
	finalPrice = salePrice+salesTax;

	cout<<"The original price is "<<ogPrice<<endl;
	cout<<"The percentage of the mark-up is "<<percMarkup<<endl;
	cout<<"The store's selling price is "<<salePrice<<endl;
	cout<<"The tax rate is "<<taxRate<<endl;
	cout<<"The sales tax is "<<salesTax<<endl;
	cout<<"The final price of the item is "<<finalPrice<<endl;

	return 0;
}
