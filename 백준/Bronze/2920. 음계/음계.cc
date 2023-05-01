#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[8];
    int n;
    int prev = 0;

    string result;
    for (int i = 0; i < 8; i++)
    {
        // cin >> arr[i];
        cin >> n;
        if (i == 0)
            prev = n;
        else if (i == 1)
        {
            if (prev == n)
            {
                result = "mixed";
                break;
            }
            if (prev < n)
            {
                result = "ascending";
            }
            else if (prev > n)
            {
                result = "descending";
            }
            prev = n;
        }
        else
        {
            if (prev == n)
            {
                result = "mixed";
                break;
            }
            if (result == "ascending" && prev > n)
            {
                result = "mixed";

                break;
            }
            if (result == "descending" && prev < n)
            {
                result = "mixed";

                break;
            }
            prev = n;
        }
    }
    cout << result;
    return 0;
}