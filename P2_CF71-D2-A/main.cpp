#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int n;
  cin>>n;

  vector<string>myVector(n);
  for(int i=0;i<n;i++){
   cin >>myVector[i] ;
  }

    for(int i=0;i<n;i++){
              if((myVector[i].size())>=10){
         cout<<myVector[i].at(0)<<(myVector[i].length())-2 << myVector[i].at((myVector[i].length())-1)<<endl;
        }
 }
    return 0;
}
