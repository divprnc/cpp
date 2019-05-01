#include<iostream>
#include<conio.h>

using namespace std;

class student
{
	char name[30];
	static int num;
	int roll;
	float a,b,c,avg;
	public:
		void get(void);
		void disp(void);
		void cal(void);	
};
int student :: num;

void student::get(void)
{
	cout<<"Enter name of the student:";cin>>name;
	cout<<"Enter marks of three subjects:";cin>>a>>b>>c;
	roll = num +1;
}

void student::cal(void)
{
	if(a<b && a<c)
	{
		avg = (b+c)/2.0;
	}
	else if(b<a && b< c)
	{
		avg = (a+c)/2.0;
		
	}
	else
	{
		avg = (a+b)/2.0;
	}
}

void student::disp(void)
{
	cout<<"Name: "<<name;
	cout<<"Roll number :"<<roll;
	cout<<"Marks 1: "<<a<<"\tMarks 2: "<<b<<"\nMarks 3: "<<c;
	cout<<"\nAverage is: "<<avg;
}

int main()
{
	student s;
	s.get();
	s.cal();
	s.disp();
}
