#include <iostream>

using namespace std;

int main()
{
    int total ,price, change , counter=1;
    cin>>price>>change;

    total = price;
    while(total%10!=0 && total%10!=change){
      total += price;
      counter++;
     }
    cout<<counter<<endl;
    return 0;
}
