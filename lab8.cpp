#include<iostream>  
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class num
{
  public: char n[9];
          long int m;
          num()
          {
            n[9]='\0';
            m=0;
          }
};
class hexa:public num
{
  public:int read_hexa()
         { 
           cout<<"Enter hexadecimal no:\n";
           cin>>n;
           char *hexstr;
           int length=0;
           const int base=16;
           unsigned long dec=0;
           int i;
           for(hexstr=n;*hexstr!='\0';hexstr++)
           {
             length++;
             //cout<<length<<"  ";
           }
//           cout<<"--"<<n;
           hexstr=n;
//           cout<<" "<<hexstr;
           for(i=0;*hexstr!='\0' && i<length;i++,hexstr++)
           {
             if(*hexstr>=48 && *hexstr<=57)
             {
               dec+=(((int)(*hexstr))-48)*pow(base,length-i-1);
             }
             else if((*hexstr>=65 && *hexstr<=70))
                dec+=(((int)(*hexstr))-55)*pow(base,length-i-1);
             else if(*hexstr>=97 && *hexstr<=102)
                dec+=(((int)(*hexstr))-87)*pow(base,length-i-1);
             else 
                cout<<"Invalid no!!\n";
           }
           return dec;
         }
};
class octa:public num
{
   public: int read_octa()
           {
               long int k=0,decnum=0;
               cout<<"Enter octal no:\n";
               cin>>m;
               while(m!=0)
               {   
                  if(m%10>7)
                  {
                     cout<<"Invalid octal number!\n";
                     return -1;
                   }
                  decnum+=(m%10)*pow(8,k);
                  k++;
                  m=m/10;
               }
               return decnum;
            }
};
int main()
{
   int choice,i,j,k,l,m,n;
   hexa h1;
   octa o1,o2;
   for(;;)
   {
      cout<<"\n1.To add hex and oct \t  2.To add oct and int\n";
      cin>>choice;
      switch(choice)
      {
         case 1: i=h1.read_hexa();
                 cout<<"After converting hex to dec : "<<i<<endl;
                 j=o1.read_octa();
                 if(j==-1)
                 {
                   break;
                 }
                 else
                 {
                 cout<<"After converting oct to dec: "<<j<<endl;
                 k=i+j;
                 cout<<"Sum is: "<<k<<endl;
                 break;
                 }
         case 2: m;
                l=o2.read_octa();
                if(l==-1)
                {
                   break;
                }
                else
                {
                cout<<"After converting oct to dec: "<<l<<endl;
                cout<<"Enter interger to be added:\n";
                cin>>m;
                n=l+m;
                cout<<"Sum is:  "<<n<<endl;
                break;
                }
         default:return(0);
     }
   }
   return 0;
}
                   
          
       
