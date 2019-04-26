#include <iostream>

using namespace std;

int main()
{
	int x;
	int sum[100] = { 0 };
	int s = 0;
	while (1) 
	{
		cin >> x;
			if (x == 0) 
			{
				break;
			}
		while (x != 0) 
		{
			sum[s] += x % 10;
			x = x / 10;
		}
		while (sum[s] > 10) 
		{
			x = sum[s];
			sum[s] = 0;
		
		while (x != 0) 
		{
		sum[s] += x % 10;
		x = x / 10;
		}
		}
		s++;
	}

	for (int i = 0; i < s; i++) 
	{
		cout <<sum[i] << endl;
	}
	return 0;
}