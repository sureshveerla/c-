#include<iostream>
using namespace std;
int main()
{
	int number,sum=0;
	cout<<"Enter Any Number : ";
	cin>>number;
	do
	{
		sum+=number%10;
		number=number/10;
	}while(number!=0);
	cout<<"Sum of Digits of Given Number : "<<sum<<endl;
	return 0;
};
