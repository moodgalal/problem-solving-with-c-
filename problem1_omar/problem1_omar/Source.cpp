#include <iostream>
using namespace std;
int main()
{
	int T=0;
	cin >> T;
	int sum[100];
	for (int i = 0; i < T; i++)
	{
		int x, y;
		cin >> x >> y;
		 sum[i] = x + y;

	}
	for (int i = 0; i < T; i++)
		cout << sum[i] << "\n";
}