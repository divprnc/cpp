#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class num
{
	public:
		char n[9];
		long int m;
		int z;
		num()
		{
			n[9] = '\0';
			m = 0;
		}	
		
};

class hexa:public num
{
	public:
		int read_hex()
		{
			cout<<"Enter a Hexadecimal Number:";
			cin>>n;
			int length = strlen(n);
			int base = 1;int dec = 0;
			for(int i =(length-1);i>=0;i--)
			{
				if(n[i]>='0' && n[i]<='9')
				{
					dec += (n[i]-48)*base;
					base *= 16;
				}
				else if(n[i]>='A' && n[i]<='F')
				{
					dec += (n[i]-55)*base;
					base *= 16;
				}
			}
			return dec;
		}
		
	
};

class octa:public num
{
	public:
		int read_octa()
		{
			
			cout<<"Enter A Octal Number:";
			cin>>z;
			int dec=0,base=1;
			int temp = z;
			while(temp)
			{
				int last = temp%10;
				temp = temp/10;
				dec += last*base;
				base *= 8;
			}
			return dec;
		}
};


int main()
{
	int choice,i,j,k,l,n,m;
	hexa h;
	octa o1,o2;
	for(;;)
	{
		cout<<"\n1:Add Hexadecimal to Octal Number\t2:Add Octal Number to Decimal Number\t3:Exit\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				i = h.read_hex();
				cout<<"\nAfter Converting HexaDecimal to Decimal Number is:"<<i<<endl;
				j = o1.read_octa();
				cout<<"\nAfter Converting Octal to Decimal Number is:"<<j<<endl;
				k = i +j;
				cout<<"\n\nAfter Adding Hex to Decimal:"<<k<<endl;		
				break;
			case 2:
				l = o2.read_octa();
				cout<<"\nAfter Converting Octal to Decimal Number is:"<<l<<endl;
				cout<<"\nEnter a Integer Number:";
				cin>>m;
				n = l + m;
				cout<<"After Adding Octal to Integer :"<<n<<endl;
				break;
			case 3:
				return(0);
			default:
				cout<<"\nInvalid Choice\n";
		}
	}
}
