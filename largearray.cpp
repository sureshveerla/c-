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
	int largest = array[0];
	for(int i=0;i<size;i++)
	{
		if(array[i]>largest)
		{
			largest = array[i];
		}
	}
	cout<<" Largest Element of an Array : "<<endl<<largest;
	return 0;
}
