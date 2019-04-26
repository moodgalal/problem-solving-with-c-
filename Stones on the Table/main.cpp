#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n , counter=0;
    cin>>n;
        string s;
        cin>>s;
        for(unsigned int i=0; i<s.size()-1; i++)
        {
            if(s.at(i) == s.at(i+1))
               counter++;
            else
                continue;
        }
        cout<<counter<<endl;

    return 0;
}
