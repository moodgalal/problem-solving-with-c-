#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    long long sum = 0;
    for(int i = 0;i < s.length(); i++){
        sum += s[i] - ('1' - 1);
    }
    bool div9 = 0,div12= 0;
    if(sum % 9 == 0)
        div9 = 1;
    int check4 = 0;
    if(s.length() >= 2)
     check4 = (s[s.length() - 2] - ('1'-1)) * 10;
    check4 +=  s[s.length()-1]-('1'-1);
    if(sum % 3 == 0 && check4 % 4 == 0)
        div12 = 1;
    cout << (div9 ? 1 : 0) << " " << (div12 ? 1 : 0) << endl;
    return 0;
}
