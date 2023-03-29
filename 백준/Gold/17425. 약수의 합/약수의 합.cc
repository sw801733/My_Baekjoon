#include <iostream>
#include <cmath>

using namespace std;

#define MAX 1000001

long long arr[MAX] = {
	0,
};

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 1; i <= MAX - 1; i++)
	{
		for (int j = 1; j <= (MAX - 1) / i; j++)
		{
			arr[i * j] += i;
		}
		arr[i] += arr[i - 1];
	}

	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		cout << arr[n] << "\n";
	}

	return 0;
}