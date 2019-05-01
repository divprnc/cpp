#include<iostream>
#include<string.h>

using namespace std;

class pk
{
	char *name;
	int length;
	public:
		pk()
		{
			length = 0;
			name = new char[length +1];
		}
		pk(char *s)
		{
			length = strlen(s);
			name = new char[length +1];
			strcpy(name,s);
		}
		friend pk operator +(pk s1, pk s2);
		friend ostream &operator <<(ostream &out, pk s);
};

pk operator +(pk s1, pk s2)
{
	pk s3;
	s3.length = (s1.length + s2.length);
	s3.name = new char[s3.length + 1];
	strcpy(s3.name,s1.name);
	strcat(s3.name,s2.name);
	return s3;
}

ostream &operator <<(ostream &out,pk s)
{
	out<<s.name<<endl;
	return out;
}

int main()
{
	pk s1("Prince "),s2("Kumar");
	cout<<"String 1:"<<s1;
	cout<<"String 2:"<<s2;
	pk s3;
	s3 = s1+s2;
	cout<<"String 3 :"<<s3;
	return 0;
}
