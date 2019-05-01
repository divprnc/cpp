#include<iostream>
#include<string.h>

using namespace std;
const int size =10;

template < class type>
class queue
{
	int f,r;
	type q[size];
	public:
		queue()
		{
			f=0;r=-1;
		}
		void insert_rear(type);
		void display();
		void delete_front();
};

template <class type>
void queue<type> :: insert_rear(type item)
{
	if(r==size-1)
	{
		cout<<"Queue is Full";
		return;
	}
	else
	{
		q[++r] = item;
	}
}

template <class type>
void queue<type> :: delete_front()
{
	if(f>r)
	{
		cout<<"Queue Underflow";
		return;
	}
	else
	{
		type item;
		item = q[f];
		cout<<"Item Deleted"<<q[f];
		f++;
	}
}
template <class type>
void queue<type> :: display()
{
	if(f>r)
	{
		cout<<"Queue is Empty";
		
	}
	cout<<"Elements of the queue are..........";
	for(int i=f;i<=r;i++)
	{
		cout<<" "<<q[i];
	}
}

int main()
{
	int choice;
	cout<<"1:Integer Queue\t2:Double Queue\nEnter your choice:";cin>>choice;
	if(choice == 1)
	{
		queue <int> q;
		for(;;)
		{
			cout<<"1:Insert\t2:Delete\t3:Display\t4:Exit\nEnter your choice:";
			int ch;
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"Enter the item:";
					int item;
					cin>>item;
					q.insert_rear(item);
					break;
				case 2:
					q.delete_front();
					break;
				case 3:
					q.display();
					break;
				default:
					return 0;
			}
		}
	}
	else if(choice == 2)
	{
		queue <double> m;
		for(;;)
		{
			cout<<"1:Insert\t2:Delete\t3:Display\t4:Exit\nEnter your choice:";
			int ch;
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"Enter the item:";
					double item;
					cin>>item;
					m.insert_rear(item);
					break;
				case 2:
					m.delete_front();
					break;
				case 3:
					m.display();
					break;
				default:
					return 0;
			}
		}
	}
		 
	else
	{
		cout<<"Invalid Choice";
	}
	return 0;
}
