#include <iostream>

using namespace std;

int main()
{
    int a,b,res=0;
    cin>>a>>b;
    res=a;
    while(a>=b){
      res+=a/b;
      int var=a%b;
      a/=b;
      a+=var;

    }
    cout<<res<<endl;


    return 0;
}
