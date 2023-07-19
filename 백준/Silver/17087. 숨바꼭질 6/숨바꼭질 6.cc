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

int gcd(int n, int m)
{
    int temp;

    while (m != 0)
    {
        temp = n % m;
        n = m;
        m = temp;
    }

    return n;
}

int main()
{
    int N, S;
    cin >> N >> S;

    vector<int> my_v;
    int prev = 0;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;

        my_v.push_back(abs(A - S));
    }

    while (my_v.size() > 1)
    {
        my_v[0] = gcd(my_v[0], my_v[1]);
        my_v.erase(my_v.begin() + 1, my_v.begin() + 2);
    }

    cout << my_v[0];
}
