#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    char pointer = 'a';
    int steps=0;
    string s;
    cin>>s;

    for(unsigned int i=0; i<s.size(); i++)
    {
      steps += min(abs(s.at(i)-pointer) , 26-abs(s.at(i)-pointer));
      pointer = s.at(i);
    }
    cout<<steps<<endl;
    return 0;
}
