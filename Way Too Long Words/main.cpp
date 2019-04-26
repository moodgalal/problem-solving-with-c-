#include <iostream>
#include<string>

using namespace std;

int main()
{
   int n;
   cin>>n;
   string word[n];
   for(int i=0 ; i<n ; i++)
   {
       cin>>word[i];
   }

   for(int i=0; i<n; i++)
   {
       if(word[i].length() > 10){
        cout<<word[i].at(0)<<word[i].size()-2<<word[i].at(word[i].size()-1)<<endl;
        }
        else
            cout<<word[i]<<endl;
   }
}
