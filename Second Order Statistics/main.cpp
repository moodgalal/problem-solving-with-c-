#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    vector<int>num;
    for(int i=0; i<n; i++)
       {
           cin>>k;
           num.push_back(k);
       }

    sort(num.begin() , num.end());

    int head = num[0];
    int pointer = 0;
    for(int i=1; i<n; i++)
    {
      if(num[i] > head)
      {
          pointer = i;
          break;
       }
    }
    if(pointer != 0 )
        cout<<num[pointer]<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
