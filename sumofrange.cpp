#include<iostream>
using namespace std;
int main()
{
	int lower_limit,upper_limit,sum=0,i;
	cout<<"Enter Lower Limit Number : "<<endl;
	cin>>lower_limit;
	cout<<"Enter Upper Limit Number : "<<endl;
	cin>>upper_limit;
	for(i=lower_limit;i<=upper_limit;i++)
	{
		sum += i;
	}
	cout<<"Sum of Numbers in Range of : "<<lower_limit<<" to "<<upper_limit<<" is "<<":"<<
	sum<<endl;
	return 0;
}
