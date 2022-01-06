#include<iostream>
using namespace std;
class robo
{
	int x,y;
	public:
		void add()
		{
			cout<<"Enter Value of X : ";
			cin>>x;
			cout<<"Enter Value of Y : ";
			cin>>y;
			cout<<"Addition of X and Y : "<<(x+y);
		}
};
int main()
{
	robo obj;
	obj.add();
	return 0;
};
