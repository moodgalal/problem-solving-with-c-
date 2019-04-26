#include <iostream>

using namespace std;

int main()
{
   int T;
   cin>>T;
   for(int i=0;i<T;i++){
   cout<<endl;
   int d1,m1,y1,d2,m2,y2,d,m,y;
   char slash [4];
   cin>>d1>>slash[0]>>m1>>slash[1]>>y1>>d2>>slash[2]>>m2>>slash[3]>>y2;
   d=d1-d2;
   m=m1-m2;
   y=y1-y2;
   if(y<0)
   {
       cout<<"Case #"<<(i+1)<<": Invalid birth date"<<endl;
   }
   if(y==0)
   {
       if(m<0)
       {

         cout<<"Case #"<<(i+1)<<": Invalid birth date"<<endl;
       }
       else if(m==0)
       {
        if(d<0)
           cout<<"Case #"<<(i+1)<<": Invalid birth date"<<endl;
       }
   }
   if(y>0)
   {
       if(y>130)
        cout<<"Case #"<<(i+1)<<": Check birth date"<<endl;

        else if(y1==(y2+1)&&m1==2&&m2==2)
            cout<<0<<endl;

        else
            cout<<"Case #"<<": "<<y<<endl;
   }

 }
    return 0;
}
