#include<iostream>
using namespace std;
int main()
{
	int num,div,sum=0;
	cout<<"Enter Number to Check : ";
	cin>>num;
	for(int i=1;i<num;i++)
	{
		div=num%i;
		if(div==0)
		sum+=i;
	}
	if(sum==num)
	{
		cout<<num<<" IS a Perfect Number ";
	}
	else
	{
		cout<<num<<" Is not a Perfect Number ";
	}
	return 0;
}
