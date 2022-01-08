#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int num)
{
	int sum=0;
	int store = num;
	do
	{
		int digit = num % 10;
		sum = sum+ pow(digit,3);
		num = num / 10;
	}
	while(num>0);
	if(sum==store)
	cout<<store<<"\t";
}
int main()
{
	int lower_limit,upper_limit;
	cout<<"Enter Lower Limit Number : ";
	cin>>lower_limit;
	cout<<"Enter Upper Limit Number : ";
	cin>>upper_limit;
	cout<<"Armstrong Numbers Between"<<lower_limit<<" and "<<upper_limit<<" are:\n";
	for(int i=lower_limit;i<=upper_limit;i++)
		armstrong(i);
	return 0;
}
