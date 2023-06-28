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

    int arr[9][9];
    int max = 0;

    int row, column;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }
    cout << max << "\n";
    cout << row << " " << column;

    return 0;
}