#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    double M;
    cin >> N;

    double arr[1000];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N, [](double a, double b)
         { return a > b; });

    double max_score = arr[0];
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        arr[i] = arr[i] / max_score * 100;
        sum += arr[i];
    }

    double mean = sum / N;
    cout << mean;

    return 0;
}