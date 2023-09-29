#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int sum = stoi(a) + stoi(b);
    string temp = to_string(sum);
    reverse(temp.begin(), temp.end());
    int reverse_sum = stoi(temp);

    cout << reverse_sum;

    return 0;
}