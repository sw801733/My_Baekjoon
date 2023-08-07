#include <bits/stdc++.h>

using namespace std;

long long go(long long A, long long B, long long C)
{
    if (B == 1)
        return A % C;

    long long ret = go(A, B / 2, C);
    ret = (ret * ret) % C;

    if (B % 2)
        ret = (ret * A) % C;
    return ret;
}

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long answer = go(A, B, C);

    cout << answer;

    return 0;
}
