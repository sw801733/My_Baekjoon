#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>

using namespace std;

int main()
{
    int mean, middle;
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + 5);
    middle = arr[2];
    mean = sum / 5;

    cout << mean << "\n"
         << middle;

    return 0;
}