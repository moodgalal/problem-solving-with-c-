#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int cases[100] = {0};
	// for the times of cases repetetion
	for (int z = 0; z < T; z++)
	{
		int a;
		cin >> a;
		int b;
		cin >> b;
		if (a <= b)
		{
			// for the limiting the loop repetetion 
			for (int i = a; i <= b; i++)
			{
				//checking the odd numbers only 
				if (i % 2 == 1)
				{
					// for storing the results into the array
					cases[z] += i;
				}
			}
		}
	}
	// the loop for printing the results
	for (int w = 0; w < T; w++)
		cout << "Case " << (w + 1) << ": " << cases[w] << "\n";
}