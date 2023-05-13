#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{

    int N, M;
    cin >> N >> M;

    int arr[300000];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int max_num = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            int sum = 0;
            for (int k = j + 1; k < N; k++)
            {
                sum += arr[i] + arr[j] + arr[k];

                if (sum > max_num && sum <= M)
                    max_num = sum;
                sum = 0;
            }
        }
    }
    cout << max_num;
    return 0;
}