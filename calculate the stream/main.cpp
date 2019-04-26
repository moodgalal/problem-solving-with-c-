#include <iostream>
#include <stack>
using namespace std;


int evaluate(string s)
{
    stack<int>x;
    for(unsigned int i=0; i<s.size(); i++)
    {
        if(s.at(i)!= '+' && s.at(i)!= '-' && s.at(i)!= '/' && s.at(i)!= '*')
        {
            x.push(s.at(i));
        }
        else
        {
         int op1 = x.top();
          x.pop();
          int op2  = x.top();
          x.pop();
          int result = 0;
          if(s.at(i)=='+')
            {
               result = op1 + op2;
            }
            if(s.at(i)=='-')
            {
               result = op1 -op2;
            }
            if(s.at(i)=='*')
            {
               result = op1 * op2;
            }
            if(s.at(i)=='/')
            {
               if(op2 != 0)
                    result = op1 / op2;
               else
                return -1;
            }

            x.push(result);
        }
    }
    return x.top();
}
int main()
{
    string s;
    cin>>s;
    int result = evaluate(s);
    cout<<result<<endl;
    return 0;
}
