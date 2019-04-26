#include <iostream>

using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    int arr1[n];
    int arr2[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }

    int check1[n-1];
    int check2[n-1];

    for(int i=0; i<n-1; i++)
    {
        check1[i] = arr1[i+1] - arr1[i];
    }
    for(int i=0; i<n-1; i++)
    {
        check2[i] = arr2[i+1] - arr2[i];
    }
    bool check = false;

    for(int i=0; i<n-1; i++)
    {
        if(check1[i] == check2[i])
            check = true;
    }

    if(check == true)
    {
        cout<<"YES"<<endl;
    }
     else
        cout<<"NO"<<endl;
    return 0;
}
