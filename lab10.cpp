#include<iostream>
#include<string.h>

using namespace std;

class invalid
{
	public:
		char st[50];
		int num;
		invalid()
		{
			*st = 0;
			num = 0;
		}
		invalid(char *s,int n)
		{
			strcpy(st,s);
			num = n;
		}
};

void fact(int n)
{
	int i,f;
	for(i=n;i>=1;i--)
	{
		f = f*i;
	}
	cout<<"\nFActorial of number is:"<<f;
}

int main()
{
	int n;
	cout<<"Enter the number to find fact::";
	cin>>n;
	try
		{
			if(n<0)
	{
		throw invalid("Negative number ",n);
	}
	else
	{
		fact(n);
	}
		}
	catch(invalid e)
	{
		cout<<e.st<<":";
		cout<<e.num<<"\n";
	}
}
