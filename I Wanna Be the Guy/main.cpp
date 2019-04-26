#include <iostream>
#include <set>

using namespace std;

int main()
{
   unsigned int levels;
    cin>>levels;

    set<int> pasedLevels;
    for(int i=0; i<2; i++)
    {
        int x;
        cin>>x;
        for(int j=0; j<x; j++)
        {
            int y;
            cin>>y;
            pasedLevels.insert(y);
        }
    }
    if(pasedLevels.size()== levels)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
