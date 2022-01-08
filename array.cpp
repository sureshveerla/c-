#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter Array Size : ";
	cin>>size;
	int array[size];
	cout<<"Enter Elements in Array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	int smallest = array[0];
	for(int i=0;i<size;i++)
	{
		if(array[i]<smallest)
		{
			smallest = array[i];
		}
	}
	cout<<" Smallest Element of an Array : "<<endl<<smallest;
	return 0;
}
