#include<iostream>
#include<list>
//#include<iteretor>
#include<vector>
using namespace std;
void displist(list<int> &l)
{
	list<int>:: iterator p;
	for(p=l.begin();p!=l.end();p++)
	{
		cout<<" "<<*p;
	}
}

void dispvec(vector<int> &v1)
{
	cout<<"Contents of the Vector 2 are....";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}

int main()
{
	vector<int> v;
	vector<int> v1;
	list<int> l;
	int x,i;
	cout<<"Enter 5 unsorted elements :";
	for(i=0;i<5;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"Elements copied from vector to list:";
	copy(v.begin(),v.end(),back_inserter(l));
	l.sort();
	displist(l);
	copy(l.begin(),l.end(),back_inserter(v1));
	dispvec(v1);
	return 0;
	
	
}
