#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int ends = a+b;
    if(ends %2 ==0 && a==b)
        cout<<"YES"<<endl;
    else if(ends%2 == 1 && b>a)
        cout<<"YES"<<endl;
    else if(ends%2==0 && a!=b)
        cout<<"NO"<<endl;
    else if(ends%2==1 && b<a)
        cout<<"NO"<<endl;
    return 0;
}
