#include<iostream>

using namespace std;

class Electricity
{
	char name[30];
	float charge,unit,amount;
	public:
		void getdata();
		void disp();
		void calculate();
};

void Electricity :: getdata()
{
	cout<<"Enter name of the customer:";
	cin>>name;
	cout<<"\nEnter unit consumed:";
	cin>>unit;
}


void Electricity :: calculate()
{
	if (unit>=0&&unit<=100)
	{
		amount = 50 + unit*1.50;
	}
	else if (unit>100&&unit<=200)
	{
		int m = unit -100;
		amount = 50 + (100*1.50)+ (m*1.80);
	}
	else if ((unit>200))
	{
		int n = unit - 200;
		
		amount = 50 + (n*2.50) + (100*1.50) + (100*1.80);
	}
	
	if(amount >300)
	{
		charge = (amount*15)/100;
		amount = amount + charge;
	}
}

void Electricity :: disp()
{
	cout<<"\nName:"<<name;
	cout<<"\nTotal Amount:"<<amount;
}

int main()
{
	Electricity e;
	e.getdata();
	e.calculate();
	e.disp();
}
