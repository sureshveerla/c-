#include<iostream>
using namespace std;
int main()
{
	int i=1,number,div=0;
	cout<<"Enter Any Number : ";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			div++;
		}
    }
	if(div==2)
	{
		cout<<number<<" Is a Prime Number";
	}
	else
	{
		cout<<number<<" Is Not a Prime Number";
	}
	return 0;
}
