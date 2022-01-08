#include<iostream>
using namespace std;
int main()
{
	int num,digit,reverse=0;
	cout<<"Enter Any Number : ";
	cin>>num;
	int temp=num;
	while(num!=0)
	{
		digit=num%10;
		reverse=(reverse*10)+digit;
		num=num/10;
	}
		cout<<"Reverse of Given Number : "<<reverse<<endl;
		if(temp == reverse)
			cout<<temp<<" Number is Palindrome  ";
		else
			cout<<temp<<" Number is Not a Palindrome ";
	return 0;
}
