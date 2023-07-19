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

    int answer = 0;
    int prev = 0;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;

        answer = gcd(prev, abs(A - S));

        prev = answer;
    }

    cout << answer;
}
