#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
  int hours,mint;
  int n;
  scanf("%d:%d",&hours,&mint);
  scanf("%d",&n);
  hours += mint / 60;
  mint %= 60;
  n =  n* 20;
  mint += n;
  hours += mint / 60;
  mint %= 60;
  if(hours >= 5 && mint > 0)
    cout<<"YES"<<endl;
  else if(hours > 5)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
