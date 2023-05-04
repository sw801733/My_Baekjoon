#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[9];

    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + 9);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sum - (arr[i] + arr[j]) == 100)
            {
                for (int a = 0; a < 9; a++)
                {
                    if (a != i && a != j)
                        cout << arr[a] << "\n";
                }
                return 0;
            }
        }
    }

    return 0;
}