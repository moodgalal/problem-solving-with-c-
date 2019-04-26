#include <iostream>
#include <string>
using namespace std;

int main()
{
    int weights[4] , cal=0;
    string s;
    for(int i=0; i<4; i++)
    {
        cin>>weights[i];
    }
    cin>>s;
    for(unsigned int i=0; i<s.size(); i++)
    {
        if(s.at(i) == '1')
           cal+=weights[0];
       else if(s.at(i) == '2')
           cal+=weights[1];
       else if(s.at(i) == '3')
           cal+=weights[2];
        else if(s.at(i) == '4')
           cal+=weights[3];
    }
cout<<cal<<endl;
    return 0;
}
