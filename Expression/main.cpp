#include <iostream>

using namespace std;
int main()
{


    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);

    int output(0);
    if(a == 1 && c == 1){output = a + b + c;}
    else if(a == 1 || (b == 1 && a < c)){output = (a + b) * c;}
    else if(c == 1 || (b == 1 && a >= c)){output = a * (b + c);}
    else{output = a * b * c;}

    cout<< output;


    return 0;
}
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   int answers[6];
   int a,b,c;
   cin>>a>>b>>c;

   answers[0]=a+b+c;
   answers[1]=a*b*c;
   answers[2]=a*b+c;
   answers[3]=a+b*c;
   answers[4]=a*(b+c);
   answers[5]=(a+b)*c;
   sort(answers,answers+6);
   cout<<answers[5]<<endl;
   return 0;
}
*/

