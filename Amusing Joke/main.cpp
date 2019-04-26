#include <iostream>
#include <string>
using namespace std;

int main()
{
  unsigned  int counter=0;
 string guest;
 string host;
 string pile;

    cin>>guest>>host>>pile;

     string pile2=pile;
 string mix=guest+host;

  if(pile.size()!=mix.size())
    cout<<"NO";
  else
  {
      for(unsigned int i=0; i<pile.length(); i++)
      {
          for(unsigned int j=0; j<mix.length(); j++)
          {
              if(pile.at(i)==mix.at(j))
              {
                counter++;
                mix.erase(j,1);
                break;
              }
          }
          pile.erase(i,1);
          i--;
      }

      if(counter==pile2.size())
        cout<<"YES";
      else
        cout<<"NO";
  }
    return 0;
}
