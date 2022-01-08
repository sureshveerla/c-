#include<iostream>
using namespace std;
int main()
{
	int limit,first=0,second=1,next,num;
	cout<<"Enter Limit of the fibonacci Numbers : ";
	cin>>num;
	cout << "First "<<num<<" terms of Fibonacci series are :- "<<endl;
	for(int i=0;i<num;i++)
	{
		if(i<=1)
			next=i;
		else
		{
			next = first+second;
			first = second;
			second = next;
		}
	cout<<next<<" ";
	}
	return 0;
};
