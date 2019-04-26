#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 /*  int n, maxi=0, mini=0,moves=0;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
   }
   int maxHeight=arr[0]; //Finding the maximum number index
   for(int i=1; i<n; i++)
   {
       if(maxHeight<=arr[i])
       {
        maxHeight = arr[i];
        maxi=i;
        }
   }

     int minHeight=arr[n-1]; //Finding the minimum number index
   for(int i=(n-1); i>1; i--)
   {
       if(minHeight>=arr[i] )
        {
            minHeight = arr[i];
            mini = i ;
        }
   }

   moves=(maxi-0)+((n-1)-mini); //Calculating the number of moves
   if(maxi>mini)
   {
    moves-=1;
   }
   cout<<moves; */

    int numberOfSoldiers , Height;
    cin>>numberOfSoldiers >> Height;

    int maxa(a) , mina(a) , maxi(0) , mini(0);
    for(int i=1; i<n; i++)
    {
      cin>>a;
      if(a>maxa)
      {
          maxa = a;
          maxi = i;
      }
      if(a<=mina)
      {
          mina = a;
          mini = i;
      }
    }
    cout<<maxi + n-1-mini - (maxi>mini?1:0)<<endl;
    return 0;
}




































