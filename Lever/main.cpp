#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string w;
    cin>>w;
    int pivot;
    int right=0 , left=0;
    for( int i=0; i<w.length(); i++)
    {
        if(w.at(i)=='^')
         {
           pivot = i;
           break;
         }
    }

    for( int i=0; i<w.length(); i++)
    {
        if(w[i]!= '^' && w[i]!='=')
            {
            if(i<pivot)
                left+=((int)w[i]-'0')*(pivot-i);
                else if(i>pivot)
                  right+=((int)w[i]-'0')*(i-pivot);
        }
    }

    if(right>left)
        cout<<"right"<<endl;
    else if(left> right)
        cout<<"left"<<endl;
    else
        cout<<"balanced"<<endl;

    return 0;
}
