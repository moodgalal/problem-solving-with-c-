#include <iostream>

using namespace std;

int main()
{
    int n , counter=0, p,v,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>p>>v>>t;
       if(p==1&&v==1&&t==1)

            counter++;
           else if(p==1&&v==1)

               counter++;

           else if(v==1&&t==1)
            counter++;
           else if (p==1&&t==1)
            counter++;
            else
                continue;
    }
    cout<<counter<<endl;
    return 0;
}
