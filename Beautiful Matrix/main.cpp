#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
   int arr[5][5];
   int x ,y , steps;
   for(int i=0; i<5; i++)
   {
       for(int j=0; j<5; j++)
       {
           cin>>arr[i][j];
           if(arr[i][j] != 0)
           {
               x=i;
               y=j;
           }
       }
   }

   steps = abs(2-x) + abs(2-y);
cout<<steps<<endl;
    return 0;
}
