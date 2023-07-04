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
    int N, k;
    vector<int> my_v;

    cin >> N >> k;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        my_v.push_back(n);
    }

    sort(my_v.begin(), my_v.end());

    cout << my_v[N - k];

    return 0;
}