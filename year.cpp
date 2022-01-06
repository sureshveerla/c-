#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter Year : ";
	cin>>year;
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
	{
		cout<<year<<" Is Leap Year";
	}
	else
	{
		cout<<year<<" Is Non-Leap Year";
    }
    return 0;
}
