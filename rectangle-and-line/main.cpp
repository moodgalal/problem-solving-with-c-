#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   double l,d,T;
  cin >> l >> d >> T;
  double tall = sqrt(l*l+d*d); // Fethagorth
  double shorty = min(l,d);
  if(T >= tall)
    cout << fixed << setprecision(9) << tall << " ";
  else
    cout << fixed << setprecision(9) <<T << " ";
  if(T >= shorty)
    cout << fixed << setprecision(9) <<shorty << "\n";
  else
    cout << fixed << setprecision(9) <<T << "\n";
  return 0;
}

