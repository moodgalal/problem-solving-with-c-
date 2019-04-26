#include <iostream>
#include <cmath>
#
#include <string>
using namespace std;

int main()
{
           string line;
   while( getline(cin , line)){
    for(unsigned int i=0 ;i<(line.length());i++)
        {

    switch(line.at(i)){

            case 'W':
            case 'w':
                line.at(i)='Q';
                cout<<line.at(i);
                   break;
            case 'E':
            case 'e':
               line.at(i)='W'; cout<<line.at(i);   break;
            case 'R':
            case 'r':
               line.at(i)='E'; cout<<line.at(i);   break;
            case 'T':
            case 't':
               line.at(i)='R'; cout<<line.at(i);   break;
            case 'Y':
            case 'y':
               line.at(i)='T';  cout<<line.at(i);  break;
            case 'U':
            case 'u':
              line.at(i)='Y';  cout<<line.at(i);  break;
            case 'I':
            case 'i':
               line.at(i)='U'; cout<<line.at(i);   break;
            case 'O':
            case 'o':
                line.at(i)='I';  cout<<line.at(i);  break;
            case 'P':
            case 'p':
               line.at(i)='O';   cout<<line.at(i); break;
            case 'S':
            case 's':
               line.at(i)='A';  cout<<line.at(i);  break;
            case 'D':
            case 'd':
              line.at(i)='S';  cout<<line.at(i);  break;
            case 'F':
            case 'f':
               line.at(i)='D';  cout<<line.at(i);  break;
            case 'G':
            case 'g':
                line.at(i)='F'; cout<<line.at(i);   break;
            case 'H':
            case 'h':
                line.at(i)='G'; cout<<line.at(i);   break;
            case 'J':
            case 'j':
                line.at(i)='H'; cout<<line.at(i);   break;
            case 'K':
            case 'k':
                line.at(i)='J';  cout<<line.at(i);  break;
            case 'L':
            case 'l':
               line.at(i)='K';  cout<<line.at(i);  break;
            case 'X':
            case 'x':
               line.at(i)='Z';  cout<<line.at(i);  break;
            case 'C':
            case 'c':
                line.at(i)='X';  cout<<line.at(i);  break;
            case 'V':
            case 'v':
               line.at(i)='C';  cout<<line.at(i);  break;
            case 'B':
            case 'b':
                line.at(i)='V'; cout<<line.at(i);   break;
            case 'N':
            case 'n':
                 line.at(i)='B'; cout<<line.at(i);   break;
            case 'M':
            case 'm':
                line.at(i)='N'; cout<<line.at(i);   break;
            case '2':
            line.at(i)='1'; cout<<line.at(i);   break;
            case '3':
            line.at(i)='2'; cout<<line.at(i);   break;
            case '4':
            line.at(i)='3'; cout<<line.at(i);   break;
            case '5':
            line.at(i)='4';  cout<<line.at(i);  break;
            case '6':
            line.at(i)='5'; cout<<line.at(i);   break;
            case '7':
            line.at(i)='6';  cout<<line.at(i);  break;
            case '8':
            line.at(i)='7';  cout<<line.at(i);  break;
            case '9':
            line.at(i)='8';  cout<<line.at(i);  break;
            case '0':
            line.at(i)='9';  cout<<line.at(i);  break;
            case '-':
            line.at(i)='0';  cout<<line.at(i);  break;
            case '=':
            line.at(i)='-'; cout<<line.at(i);   break;
            case '[':
            line.at(i)='P'; cout<<line.at(i);   break;
            case ']':
            line.at(i)='['; cout<<line.at(i);  break;
            case '\\':
            line.at(i)=']';  cout<<line.at(i);  break;
            case ';':
            line.at(i)='L'; cout<<line.at(i);   break;
            case '1':
            line.at(i)='`';  cout<<line.at(i);  break;
            case ',':
            line.at(i)='M'; cout<<line.at(i);  break;
            case '.':
            line.at(i)=',';  cout<<line.at(i); break;
            case '/':
            line.at(i)='.'; cout<<line.at(i);  break;
            case' ' : line.at(i)=' '; cout<<line.at(i); break;
            default:
               break;
             }
        }
   }

    return 0;
}

