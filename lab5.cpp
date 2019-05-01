#include<iostream>
#include<string.h>
using namespace std;

struct node
{
	char data[20];
	struct node *left,*right;
};

typedef struct node *NODE;

class customer
{
	NODE first;
	int count;
	public:
		customer()
		{
			first = NULL;
			count = 1;
		}
		
		void insert();
		void del(int);
		void print();
		~customer()
		{
			cout<<"\nDestructing the customer class\n";
		}
};

void customer::insert()
{
	
	char item[20];
	cout<<"Enter the item to insert:";
	cin>>item;
	NODE temp;
	temp = new(struct node);
	temp->left=temp->right=NULL;
	if(first == NULL)
	{
		strcpy(temp->data,item);
		first = temp;
	}
	else
	{
		strcpy(temp->data,item);
		temp ->right = first;
		first ->left = temp;
		first = temp;
	}
}


void customer::del(int pos)
{
   NODE cur,prev,temp;
   if(first==NULL)
   {
     cout<<"No elements to delete\n";
     return;
   }
   if(pos==1)
   {
     cout<<first->data<<"is deleted\n";
     cur=first;
     first=first->right;
     if(first!=NULL)
       first->left=NULL;
     delete(cur);
     return;
   }
   prev=NULL;
   cur=first;
   while(cur!=NULL && count!=pos)
   {
     prev=cur;
     cur=cur->right;
     count++;
   }
   if(cur==NULL)
   {
     count=1;
     cout<<"Wrong position to delete\n";
     return;
   }
   else
   {
   count=1;
   temp=cur->right;
   prev->right=temp;
   if(temp!=NULL)
     temp->left=prev;
   cout<<"The item deleted is :\n";
   cout<<cur->data<<endl;
   delete(cur);
   }

}


void customer :: print()
{
	NODE disp;
	if(first == NULL)
	{
		cout<<"\nList is Empty\n";
		return;
	}
	disp = first;
	while(disp != NULL)
	{
		cout<<"-> "<<disp->data<<endl;
		disp = disp -> right;
	}
	
}



int main()
{
	int choice,pos;
	customer c;
	while(1)
	{
		cout<<"1:Insert\t2:Delete\t3:Display\t4:Exit\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				c.insert();
				break;
			case 2:
				cout<<"\nEnter the position:";
				cin>>pos;
				c.del(pos);
				break;
			case 3:
				cout<<"Contents of the linked list are.....\n";
				c.print();
				break;
			case 4:
				return 0;
				break;
			default:
				cout<<"\nInvalid Choice\n";
		}
	}
	return 0;
}

