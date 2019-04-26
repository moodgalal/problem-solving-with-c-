#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char c = toupper(s.at(0));
    cout<<c;
    for(unsigned int i=1; i<s.size(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    return 0;
}
