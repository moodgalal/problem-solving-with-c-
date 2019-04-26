#include <iostream>

using namespace std;

int main()
{
    int n,k,counter=0;
    cin>>n>>k; // Taking the values from the user
    int scores[n]; //Creating an array to store the scores of the competitors

    for(int i=0;i<n;i++)
        cin>>scores[i];

    for(int i=0;i<n;i++)
    {
        if(scores[i]>=scores[k-1]&&scores[i]!=0) //Doing the checking on who will advance to the next round
            counter++;
    }
    cout<<counter;
    return 0;
}
