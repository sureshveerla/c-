#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int fact=1,number;
	cout<<"Enter Number : ";
	cin>>number;
	if(number<0)
		cout<<"Invalid Input Enter Whole Number only ";
	else
	{
		for(int i=number;0<i;i--)
		{
			fact*=i;
		}
	cout<<"factorial of Given Number is : "<<fact;
	}
return 0;
}
