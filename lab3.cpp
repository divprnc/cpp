#include<iostream>

using namespace std;

class complex
{
	float x,y;
	public:
		complex(){
		}
		complex(float a, float b)
		{
			x=a;y=b;
		}
		void disp();
		complex add(int);
		complex add(complex);
};

complex complex :: add(int m)
{
	complex c;
	c.x = x + m;
	c.y = y;
	return c;
}

complex complex :: add(complex n)
{
	complex z;
	z.x = x + n.x;
	z.y = y + n.y;
	return z;
}

void complex :: disp()
{
	cout<<x<<" + "<<y<<"i"<<endl;
}

int main()
{
	complex c1(3,4);
	int a;
	cout<<"Enter the value for a: ";cin>>a;
	cout<<"c1=";
	c1.disp();
	complex c2,c3;
	c2 = c1.add(a);
	c3 = c1.add(c2);
	cout<<"c2=";c2.disp();
	cout<<"c3=";c3.disp();
	return 0;
}
