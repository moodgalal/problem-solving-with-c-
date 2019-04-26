#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,x;
  cin >> x;
  cin >> s;
  int checker = 0;
  for(unsigned int i = 0; i < s.length(); i++)
  {
    if(s[i] == x[checker]){
      checker++;
    }
  }
  if(checker == x.length())
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
