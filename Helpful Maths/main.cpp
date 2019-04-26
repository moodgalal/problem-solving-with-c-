#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string n; // Creating a string variable to receive the string from the user
  getline(cin,n); // Receiving the input stream from the user
  char arr[n.length()/2]; // To fractionate the string into  character pieces
  for(unsigned int i=0; i<n.length(); i+=2)
  {
    arr[i]=n.at(i);
  }

    for(unsigned int i=0;i<n.length();i+=2) // check on each element of the array
    {
         for(unsigned int j=0;j<n.length();j+=2) // check if the first element is bigger than the rest of the elements
         {
          char swaper=' '; // a variable to enables to swap the elements of the array
           if(arr[i]>arr[j])
           {
               swaper=arr[i];
               arr[i]=arr[j];
               arr[j]=swaper;
           }
         }
    }

        for(unsigned int i=n.length()-1; i>=0; i-=2)
        {
            cout<<arr[i];
            if(i==0)
                break;
            else
                cout<<"+";
        }
    return 0;
}

