#include <iostream>

using namespace std;

int euclid_GCD(int a, int b) // Euclid's algorithm is much more more efficient than trial division.
{
    return b==0? a : euclid_GCD(b , a%b);

    /*
    int divided = a;
    int divisor = b;
    int remainder = 0;
    while(divisor !=0)
    {
      remainder = divided%divisor;
      divided = divisor;
      divisor = remainder;
    }
    return divided;
    */
}
int main()
{
    int y ,w;
    cin>>y>>w;
    int iMax = max(y,w);
    int nom = (6-iMax)+1;
    int dom = 6;
    int gcd = euclid_GCD(nom , dom);

    nom /= gcd;
    dom /= gcd;
    cout<<nom<<"/"<<dom<<endl;
    return 0;
}
