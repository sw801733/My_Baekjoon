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
    int arr2[7];

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 9);
    int k1, k2;
    for (int i = 0; i < 9; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = 0; k < 9; k++)
            {
                if (k != i && k != j)
                {
                    sum += arr[k];
                }
            }
            if (sum == 100)
            {
                for (int a = 0; a < 9; a++)
                {
                    if (a != i && a != j)
                        cout << arr[a] << "\n";
                }
                return 0;
            }
            else
                sum = 0;
        }
    }

    return 0;
}