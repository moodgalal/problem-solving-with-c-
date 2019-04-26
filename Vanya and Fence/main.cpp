#include <iostream>

using namespace std;

int main()
{
    int n , h , wSum=0;
    cin>>n>>h;
    while(n--)
    {
      int iH;
      cin>>iH;
      if(iH > h)
        wSum+=2;
      else
        wSum+=1;
    }

        cout<<wSum<<endl;
    return 0;
}
