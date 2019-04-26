#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str;
   cin>>str;
    for(unsigned int i=0; i<str.length(); i++)
   {
       str[i] = tolower(str[i]);
       if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y')
           cout<<'.'<<str[i];
   }
   cout<<endl;
   return 0;
}
