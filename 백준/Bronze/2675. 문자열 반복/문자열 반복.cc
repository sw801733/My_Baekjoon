#include <iostream>
#include <cmath>

using namespace std;


int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int R;
		string str;

		cin >> R >> str;
		for (int i = 0; i < str.length(); i++)
		{
			for (int j = 0; j < R; j++)
			{
				cout << str[i];
			}
		}
		cout << "\n";
	}

	return 0;
}