#include <iostream>

using namespace std;

int main()
{
    int x;
    int var1;
    int var2;
    cin>>x;

    if(x>0)
    {
        cout<<x;
    }
    else
    {
      var1 = x/10;
      var2 = (x/100)*10 + (x%10);

      if(var1>var2)
            cout<<var1<<endl;
      else
        cout<<var2<<endl;
    }
    return 0;
}

