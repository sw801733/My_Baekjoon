#include <bits/stdc++.h>
using namespace std;

int N;
int ret = -INT_MAX;

char a[3] = {'+', '-', '*'};

vector<int> num;
vector<int> oper;

int Cal(char op, int a, int b)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
}

void solve(int idx, int n)
{
    if (idx == num.size() - 1)
    {
        ret = max(ret, n);
        return;
    }

    solve(idx + 1, Cal(oper[idx], n, num[idx + 1]));

    if (idx + 2 <= num.size() - 1)
    {
        int temp = Cal(oper[idx + 1], num[idx + 1], num[idx + 2]);
        solve(idx + 2, Cal(oper[idx], n, temp));
    }
}

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    string str;
    cin >> str;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            num.push_back(str[i] - '0');
        else
            oper.push_back(str[i]);
    }

    solve(0, num[0]);

    cout << ret;
    return 0;
}