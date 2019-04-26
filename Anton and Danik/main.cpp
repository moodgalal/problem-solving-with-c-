#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
        string s;
        cin>>s;

        int A = count(s.begin() , s.end() , 'A');
        int D = count(s.begin() , s.end() , 'D');

        if(A>D)
            cout<<"Anton"<<endl;
        else if(D>A)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;

    return 0;
}
