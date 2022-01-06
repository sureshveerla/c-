#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"Enter Number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of Natural Number "<<sum<<endl;
	return 0;
}
