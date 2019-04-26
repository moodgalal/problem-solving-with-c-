#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s;
    set<char>let;
    getline(cin , s);
    for(unsigned int i=0; i<s.size(); i++)
    {
      if(s.at(i) != '{' && s.at(i) != '}' && s.at(i) != ' ' && s.at(i) != ',')
            let.insert(s.at(i));
      else
        continue;
    }
    cout<<let.size()<<endl;
    return 0;
}
