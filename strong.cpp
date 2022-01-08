#include<iostream>
using namespace std;
int main()
{
	int a,sum=0,save,num,fact;
	cout<<"Enter Number to Check : ";
	cin>>a;
	save=a;
	while(a)
	{
		num=a%10;
		fact=1;
		for(int i=num;i>0;i--)
		{
			fact=fact*i;
		}
		sum+=fact;
		a/=10;
	}
	if(sum==save)
	{
		cout<<save<<" Is a Strong Number ";
	}
	else
	{
		cout<<save<<" Is Not a Strong Number ";
	}
	return 0;
}
