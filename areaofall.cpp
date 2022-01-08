#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
	protected:
		float a;
	public:
		virtual void getdata()
		{
			cin>>a;
		}
		virtual float area()=0;
		virtual float peri()=0;
		virtual void show1()=0;
		virtual void show2()=0;
};
class Circle:public Shape
{
	public:
		void getdata()
		{
			cout<<"Enter radius of the circle : "<<endl;
			Shape::getdata();
		}
		float area()
		{
			return(3.14*a*a);
		}
		float peri()
		{
			return(2*3.14*a);
		}
		void show1()
		{
			cout<<"Area of a Circle is : ";
		}
		void show2()
		{
			cout<<"Perimeter of the circle is : ";
		}
};
class Rectangle:public Shape
{
	float b;
	public:
		void getdata()
		{
			cout<<"Enter Lenght,Breadth of the Rectangle "<<endl;
			Shape::getdata();
			cin>>b;
		}
		float area()
		{
			return (a*b);
		}
		float peri()
		{
			return(2*(a+b));
		}
		void show1()
        {
        	cout<<"Area of Rectangle is : ";
		}
		void show2()
		{
			cout<<"Perimeter of Rectangle is : ";
		}
};
class Triangle:public Shape
{
	float b,c;
	public:
		void getdata()
		{
			cout<<"Enter 3 side's of the Triangle : "<<endl;
			Shape::getdata();
			cin>>b>>c;
		}
		float area()
		{
			float s=(a+b+c)/2;
			return(sqrt(s*(s-a)*(s-b)*(s-c)));
		}
		float peri()
		{
			return(a+b+c);
		}
		void show1()
		{
			cout<<"Area of Triangle is : ";
		}
		void show2()
		{
			cout<<"Perimeter of Triangle is : ";
		}
};
int main()
{
	int ch;
	Shape *sp;
	cout<<"1.circle"<<endl;
	cout<<"2.Rectangle"<<endl;
	cout<<"3.Triangle"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: sp=new Circle();
			    break;
		case 2: sp=new Rectangle();
				break;
		case 3: sp=new Triangle();
				break;
	}
	sp->getdata();
	sp->show1();
	cout<<sp->area()<<endl;
	sp->show2();
	cout<<sp->peri()<<endl;
	return 0;
}
