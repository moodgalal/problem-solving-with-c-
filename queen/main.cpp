#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    double distanc;
   cin>>x1>>y1>>x2>>y2;
 while(cin>>x1>>y1>>x2>>y2)
{
        if(x1==0 && y1==0 && x2==0 && y2==0)
            break;

        else{
            distanc=sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
           }
        cout<<distanc<<endl;
    }

    return 0;
}
