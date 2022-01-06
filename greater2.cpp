#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	if(a==b)
	{
		cout<<"Both Numbers are Equal : ";
	}
	else if(a>b)
	{
		cout<<a<<" is Greater than  "<<b<<endl;
	}
	else
	{
		cout<<b<<" is  Greater than  "<<a<<endl;
	}
	return 0;
}
	

