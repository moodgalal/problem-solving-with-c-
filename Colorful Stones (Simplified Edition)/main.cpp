#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s , c;
    int liss=0;
    cin>>s>>c;


    for(unsigned int i=0, j=0; j<c.size(); j++)
    {
        if(c.at(j)== s.at(i))
        {
            liss=i+1;
            i++;
            continue;
        }
        else
        {
          continue;
        }
    }
    cout<<liss+1<<endl;
    return 0;
}
