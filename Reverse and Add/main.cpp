#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string IntToString ( int number )
{
  ostringstream oss;

  // Works just like cout
  oss<< number;

  // Return the underlying string
  return oss.str();
}
int main()
{
   int n;
   cin>>n;

   for(int i=0;i<n;i++)
   {
       int p,temp=0,add=0,result=0;
        cin>>p;
        while(n!=0)
        {
            temp=(temp*10)+(p/10);
            p%=10;
        }
        add=temp+p ;
        string str =IntToString(add);
    for(unsigned int i=0;i<str.length();i++)
        {
            if(str.at(i)==str.at(str.length()-(i+1)))
                break;

            else
            {
                while(add!=0)
                {
                    temp=(temp*10)+(add/10);
                    add%=10;
                }
            result=temp+add ;
                    string str =IntToString(result);
            for(unsigned int i=0;i<str.length();i++)
                {
            if(str.at(i)==str.at(str.length()-(i+1)))
                break;
                }
                else
                    goto
            }

        }
         cout<<result;
    }
    return 0;
}
