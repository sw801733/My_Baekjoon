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
    int arr1[1001] = {
        0,
    };
    int arr2[1001] = {
        0,
    };
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        cin >> a >> b;
        arr1[a]++;
        arr2[b]++;
    }
    for (int i = 0; i < 1001; i++)
    {
        if (arr1[i] == 1)
            cout << i << " ";
    }
    for (int i = 0; i < 1001; i++)
    {
        if (arr2[i] == 1)
            cout << i << " ";
    }
}