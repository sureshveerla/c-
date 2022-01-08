#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double base,exp;
	cout<<"Enter Base Value : ";
	cin>>base;
	cout<<"Enter Exponent : ";
	cin>>exp;
	double res = pow(base,exp);
	cout<<base<<"^"<<exp<<"=";
	cout<<fixed<<setprecision(2)<<res<<endl;
};
