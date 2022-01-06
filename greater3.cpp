#include<iostream>
using namespace std;
int main()
{
	int First,Second,Third;
	cout<<"Enter First Number : ";
	cin>>First;
	cout<<"Enter Second Number : ";
	cin>>Second;
	cout<<"Enter Third Number : ";
	cin>>Third;
	if((First>=Second)&&(First>=Third))
	{
		cout<<First<<" Is Greatest";
	}
	else if((Second>=First)&&(Second>=Third))
	{
		cout<<Second<<" Is Greatest";
	}
	else
	{
		cout<<Third<<" Is Greatest";
	}
	return 0;
}
