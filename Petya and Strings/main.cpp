#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstStr , lastStr;
    cin>>firstStr>>lastStr;
    for(unsigned int i=0;i<firstStr.size(); i++)
    {
        firstStr[i] = tolower(firstStr[i]);
    }
    for(unsigned int i=0;i<lastStr.size(); i++)
    {
       lastStr[i] = tolower(lastStr[i]);
    }
    if(firstStr>lastStr)
        cout<<1<<endl;
    else if(firstStr<lastStr)
        cout<<-1<<endl;
    else
        cout<<0<<endl;
}









