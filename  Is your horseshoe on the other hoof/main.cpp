#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>num;
    int x , counter;
    for(int i=0; i<4; i++)
        {
            cin>>x;
            num.insert(x);
        }

   counter = 4 -  num.size();
    cout<<counter<<endl;
    return 0;
}
