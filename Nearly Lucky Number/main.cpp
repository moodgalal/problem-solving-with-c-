#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int seven = count(s.begin() , s.end(),'7');
    int four = count(s.begin() , s.end(),'4');
    int lucky = seven + four;
    if(lucky == 7 || lucky == 4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
