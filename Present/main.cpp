#include <iostream>
using namespace std;

int main()
{
    int n; // The number of friends
    cin>>n;

    int givers[n]; // The number of each friend and give to the position that it takes
    int numbers[n]; // Holding the numbers of the friends that had taken

    for(int i=0; i<n; i++)
    {
        cin>>givers[i];
        numbers[i]=i+1;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(numbers[i] == givers[j]) // if the number of the friend is 1 it will search for the guy who took a present from him and return
            {                               // Its index
                cout<<j+1<<" ";
                break;
            }
        }
    }
    return 0;
}
