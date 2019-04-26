#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int policeOfficers=0 , counter=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x>0)
            policeOfficers+=x;
        else
        {
          if(policeOfficers == 0)
                counter++;
          else
            policeOfficers--;
        }
    }
    cout<<counter<<endl;
    return 0;
}
