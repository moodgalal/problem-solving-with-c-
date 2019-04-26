#include <iostream>

using namespace std;

int main()
{
    int teams;
    cin>>teams;

    int teamsColours[teams][2];
    for(int i=0; i<teams; i++)
    {
        for(int j=0; j<2; j++)
            cin>>teamsColours[i][j];
    }

    int counter=0;
    for(int i=0; i<teams; i++)
    {
        for(int j=0; j<teams; j++)
        {
            if(teamsColours[i][0] == teamsColours[j][1])
                counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
