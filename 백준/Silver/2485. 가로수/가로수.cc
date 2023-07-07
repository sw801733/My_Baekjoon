#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>
#include <map>

using namespace std;

long long gcd(long long a, long long b)
{
    long long temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    long long prev_n = 0;
    vector<long long> my_v;

    long long answer = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        long long n;
        cin >> n;

        if (i > 0)
        {
            my_v.push_back(n - prev_n);
        }
        prev_n = n;
    }

    long long gcd_n = my_v[0];
    for (int i = 1; i < my_v.size(); i++)
    {
        gcd_n = gcd(gcd_n, my_v[i]);
    }

    for (int i = 0; i < my_v.size(); i++)
    {
        answer += my_v[i] / gcd_n - 1;
    }

    cout << answer;

    return 0;
}