#include<iostream>
using namespace std;
int main()
{
	 int num,rev=0,rem;
	 cout<<"Enter Given Number : ";
	 cin>>num;
	 while(num!=0)
	 {
	 	rem=num%10;
	 	rev=rev*10+rem;
	 	num/=10;	
	 };
	 cout<<"Reverse of Given Number : "<<rev;
	 return 0;
}
