#include<iostream>
using namespace std;
void prime(int num)
{
	int div=0;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		div ++;
	}
	if(div==2)
	cout<<num<<endl;
}
int main()
{
	cout<"Enter range : ";
	int lower_limit,upper_limit,i;
	cin>>lower_limit>>upper_limit;
	cout<<"Prime Number Between : "<<lower_limit<<" and "<<upper_limit<<" are : "<<endl; 
	for(int i=lower_limit;i<=upper_limit;i++)
		prime(i);
	return 0;
}
