#include <iostream>
#include <stack>
using namespace std;

int main()
{
 stack<int>oPrice;
  int t;
  cin>>t;
  while(t--)
  {
    int customer;
    cin>>customer;
    if(customer == 1)
    {
        if(oPrice.empty())
            cout<<"No Food"<<endl;
        else
        {
         cout<<oPrice.top()<<endl;
         oPrice.pop();
        }
    }
    else
    {
        int price;
        cin>>price;
        oPrice.push(price);
    }
  }
    return 0;
}
