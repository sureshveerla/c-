#include<iostream>
using namespace std;
int small(int a[],int total)
{
	int temp;
	for(int i=0;i<total-1;i++)
	{
		for(int j=i+1;j<total;j++)
		{
			if (a[i] > a[j])   
            {  
                temp = a[i];  
                a[i] = a[j]; 
                a[j] = temp;  
            }  
		}
	}
	for(int i=1;i<total;i++)
	{
		if(a[i]!=a[0])
			return a[i];
	}
	return -1;
}
int main()
{
	int a[] ={15,85,42,1,2,58,36,78};
	cout<<"Second Smallest :  "<<small(a,8);
	return 0;
}
