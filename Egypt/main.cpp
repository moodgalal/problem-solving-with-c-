#include <iostream>
#include <cmath>
#include <cstdio>
#include<stdio.h>

using namespace std;

int main()
{
    double n1 ,n2,n3;
    while(cin>>n1>>n2>>n3)
    {
        if(n1==0&&n2==0&&n3==0)break;

        if(pow(n1,2)==(pow(n2,2)+pow(n3,2))|| pow(n2,2)==(pow(n1,2)+pow(n3,2))||pow(n3,2)==(pow(n1,2)+pow(n2,2)))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }

    return 0;
}
