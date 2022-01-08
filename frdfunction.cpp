#include<iostream>
using namespace std;
class Person
{
	protected:
		int id;
		char name[30];
		int age;
		public:
			void getPerson()
			{
				cout<<"Enter id : ";
				cin>>id;
				cout<<"Enter Name : ";
				cin>>name;
				cout<<"Enter Age : ";
				cin>>age;
			}
			void putPerson()
			{
				cout<<"id : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Age : "<<age<<endl;
			}
};
class Admin:public Person
{
	protected:
		float salary;
		public:
			void getAdmin()
			{
				Person::getPerson();
				cout<"Enter Salary : ";
				cin>>salary;
			}
			void putAdmin()
			{
				Person::putPerson();
				cout<<"salary : "<<salary<<endl;
			}
};
class Experience:public Person
{
	protected:
		int years;
		public:
			void getExperience()
			{
				cout<<"Enter No.of Years Experience "<<endl;
				cin>>years;
			}
			void putExperience()
			{
				cout<<"No.of Years : "<<years<<endl;
			}
};
class Teacher:public Admin,public Experience
{
	char subject[30];
	public:
		void getTeacher()
		{
			Admin::getAdmin();
			Experience::getExperience();
			cout<<"Enter Subject : "<<endl;
			cin>>subject;
		}
		void putTeacher()
		{
			Admin::getAdmin();
			Experience::putExperience();
			cout<<"Subject : "<<subject<<endl;
		}
		friend void searchTeacher(Teacher t1[1000],int id1,int n)
		{
			int i,f=0;
			for(i=0;i<n;i++)
			{
				if(t1[i].Admin::id==id1)
				{
					t1[i].putTeacher();
					f=1;
					break;
				}
			}
			if(f==0)
			cout<<"Invalid Teacher id : "<<endl;
		}
};
int main()
{
	int n,i,ch,id;
	char choice;
	Teacher t[100];
	cout<<"enter no of teacher records"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<" Teacher details"<<endl;
		t[i].getTeacher();
	}
	do
	{
	
	cout<<"1.display all Teacher details"<<endl;
	cout<<"2.display specified Teacher details"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			for(i=0;i<n;i++)
			t[i].putTeacher();
			break;
		case 2:
			cout<<"enter Teacherid"<<endl;
			cin>>id;
			searchTeacher(t,id,n);
			break;
	}
	cout<<"do you want to continue(y/n)?"<<endl;
	cin>>choice;
	}
	while(choice=='y'|| choice=='Y');
	return 0;
}
