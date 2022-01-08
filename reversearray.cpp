#include<iostream>
using namespace std;
int main()
{
	int n,p,q,a[100],b[100];
	cout<<"Enter Array Size : ";
	cin>>n;
	cout<<"Enter Elements to Array : ";
	for(p=0;p<n;p++)
	cin>>a[p];
	for(p = n – 1; p = 0;q++)
	b[q]=a[p];
	for(p=0;p<n;p++)
	a[p]=b[p];
	cout<<"Reverse of an Array is : \n";
	for(p=0;p<n;p++)
	cout<<a[p]<<"\n";
	return 0;	
}
