#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>

using namespace std;

int main()
{

    int arr[101][101] = {
        0,
    };

    int N;
    cin >> N;
    int area = 0;
    for (int i = 0; i < N; i++)
    {
        int r, c;
        cin >> r >> c;
        for (int j = r; j < r + 10; j++)
        {
            for (int k = c; k < c + 10; k++)
                arr[j][k]++;
        }
    }

    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            if (arr[i][j] >= 1)
                area++;
        }
    }

    cout << area;

    return 0;
}