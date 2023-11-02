#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int P;

    cin >> P;

    for (int i = 1; i <= P; i++)
    {
        int T;
        cin >> T;
        int arr[20];

        for (int i = 0; i < 20; i++)
        {
            cin >> arr[i];
        }

        int res = 0;
        for (int i = 0; i < 20; i++)
        {
            for (int j = i; j < 20; j++)
            {
                if (arr[i] > arr[j])
                {
                    res++;
                }
            }
        }

        cout << i << " " << res << "\n";
    }
}