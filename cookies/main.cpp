#include <iostream>

using namespace std;

int main()
{
    int n , sum=0 , eCount=0 , oCount=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+= arr[i];
        if(arr[i]%2 == 0)
            eCount++;
        else if(arr[i]%2!=0)
            oCount++;
    }
     if(sum%2 == 0)
        cout<<eCount<<endl;
    else if(sum%2 != 0)
        cout<<oCount<<endl;
    return 0;
}
