#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<int> my_v;

    if (N == 0)
    {
        cout << 0;
        return 0;
    }

    while (N != 0)
    {
        if (N % -2 == 0)
        {
            my_v.push_back(0);
            N /= -2;
        }
        else
        {
            my_v.push_back(1);
            N = (N - 1) / -2;
        }
    }

    reverse(my_v.begin(), my_v.end());

    for (int i = 0; i < my_v.size(); i++)
        cout << my_v[i];

    return 0;
}
