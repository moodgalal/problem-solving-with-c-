#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    bool indicator = false;
    cin>>n;
   string name[n];
   int before[n];
   int after[n];

   for(int i=0; i<n; i++)
   {
     cin>>name[i]>>before[i]>>after[i];
       if(before[i] >= 2400 && after[i] > before[i] )
          indicator = true;
       else
        continue;
   }

    if(indicator == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}






