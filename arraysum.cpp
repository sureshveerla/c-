#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size of an Array : ";
	cin>>n;
	int a[n],sum=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		sum +=a[i];
	cout<<"Sum of Elements :  "<<sum;
	return 0;
	
}
