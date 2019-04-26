#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n ,x=0;
   cin>>n;
   string arr[n];
   for(int i=0; i<n; i++)
   {
     cin>>arr[i];
   }

   for(int i=0; i<n; i++)
   {
       if(arr[i]=="x++"||arr[i]=="++x"||arr[i]=="++X"||arr[i]=="X++")
        x++;
       else
        x--;
   }
   cout<<x;
    return 0;
}
