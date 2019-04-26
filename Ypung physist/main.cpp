#include <iostream>

using namespace std;

int main()
{
    int n;
    int x(0),y(0),z(0);
    cin>>n;
    int cor[n][3];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>cor[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        x+= cor[i][0];
        y+= cor[i][1];
        z+= cor[i][2];
    }

    if(x==0 && y==0 && z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
