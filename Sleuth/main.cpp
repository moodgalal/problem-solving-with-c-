#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    bool indicator = false;
    for(int i=s.size()-2; i>-1; i--)
    {
       s.at(i) = tolower(s.at(i));
      if(s.at(i) != ' ')
      {
          if(s.at(i) == 'a' ||s.at(i) == 'e' ||s.at(i) == 'i' ||s.at(i) == 'o' ||s.at(i) == 'u' ||s.at(i) == 'y')
          {
              indicator = true;
              break;
          }
          else
            break;
      }
      else
        continue;
    }
    if(indicator == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
