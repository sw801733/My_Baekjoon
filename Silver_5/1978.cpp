#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int prime(int n)
{
	if (n == 1)
		return 0;
	for (int j = 2; j <= n; j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	int m;
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		cnt += prime(m);
	}
	cout << cnt;

	return 0;
}