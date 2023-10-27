#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int N;

int arr[1000001];

bool check(int num)
{

    int temp[10] = {
        0,
    };

    while (num != 0)
    {
        if (temp[num % 10] == 0)
            temp[num % 10]++;
        else
        {
            return true;
        }

        num /= 10;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num = 1;
    for (int idx = 1; idx <= 1000000;)
    {
        if (!check(num))
        {
            arr[idx++] = num;
        }
        num++;
    }

    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        cout << arr[n] << "\n";
    }

    return 0;
}
