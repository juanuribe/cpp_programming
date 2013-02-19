#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2, str3;

	cout<<"Please enter three strings."<<endl;
	cin>>str1>>str2>>str3;

	cout<<"The six permutations are."<<endl;
	cout<<str1<<str2<<endl;

	cout<<str1<<str3<<endl;
	
	cout<<str2<<str1<<endl;
	cout<<str2<<str3<<endl;

	cout<<str3<<str1<<endl;
	cout<<str3<<str2<<endl;

	return 0;
}
