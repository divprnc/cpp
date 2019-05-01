//Abstract class
#include<iostream>
using namespace std;
class shape
{
   protected:  int x,y;
   public:
       virtual void getdata()=0;
       virtual void compute()=0;
};
class circle:public shape
{
   void getdata()
   {
     cout<<"Enter radius :\n";
     cin>>x;
   }
   void compute()
   {
      int a;
      a=(3.14)*x*x;
      cout<<"Area of circle is:\n"<<a<<endl;
   }
};
class rectangle:public shape
{
   void getdata()
   {
     cout<<"Enter the length and breadth : ";
     cin>>x>>y;
   }
   void compute()
   {
      int b;
      b=x*y;
      cout<<"Area of rectangle is: "<<b<<endl;
   }
};
class square:public shape
{
   void getdata()
   {   cout<<"Enter the side of square:\n";
       cin>>x;
    }
    void compute()
    {
       int c;
       c=x*x;
       cout<<"Area of square is: "<<c<<endl;
    }
};
int main()
{
   circle cir;
   rectangle rec;
   square sq;
   shape *p[3];
   p[0]=&cir;
   p[1]=&rec;
   p[2]=&sq;
   int choice;
   while(1)
   {
      cout<<"1.Circle \t 2.Rectangle\t 3.Square \t 4.Exit\n";
      cout<<"Enter ur choice:\n";
      cin>>choice;
      switch(choice)
      {
        case 1:p[0]->getdata();
        p[0]->compute();
        break;
        case 2:p[1]->getdata();
        p[1]->compute();
        break;
        case 3:p[2]->getdata();
        p[2]->compute();
        break;
        default: return 0;
      }
   }
 return 0;
}
        

       
