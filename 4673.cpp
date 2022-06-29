#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;
int arr[10001] = {0,};
int num = 0;
int a = 0;
int b = 0;

int self_num(int n)
{

	int num = n;
	while(n != 0)
	{
		num = num + (n % 10);
		n = n / 10;
	}
	return num;
}

int main()
{		
	cin.tie(NULL);
    ios::sync_with_stdio(false);
	int n;
	for (int i = 1; i <= 10000;i++)
	{
		n = self_num(i);
		if (n <= 10000)
			arr[n] = 1;
	}
	for (int i = 1; i <= 10000;i++)
	{
		if (arr[i] == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}