#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter Any Number : ";
	cin>>number;
	cout<<"Factors of "<<number<<" are : "<<endl;
	for(int i=1;i<number;i++)
	{
	if(number%i==0)
		cout<< i <<"\t";
    }
	return 0;
}
