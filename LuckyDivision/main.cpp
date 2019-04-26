#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     int n;
    cin>>n;
    if(
       n%4==sqrt(n)||
       n%7==sqrt(n)||
       n%47==sqrt(n)||
       n%74==sqrt(n)||
       n%444==sqrt(n)||
       n%447==sqrt(n)||
       n%477==sqrt(n)||
       n%777==sqrt(n)||
       n%774==sqrt(n)||
       n%744==sqrt(n)||
       n%747==sqrt(n)||
       n%474==sqrt(n)||
       n/4==1||
       n/7==1||
       n/47==1||
       n/74==1||
       n/444==1||
       n/447==1||
       n/477==1||
       n/777==1||
       n/774==1||
       n/744==1||
       n/747==1||
       n/474==1    )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
