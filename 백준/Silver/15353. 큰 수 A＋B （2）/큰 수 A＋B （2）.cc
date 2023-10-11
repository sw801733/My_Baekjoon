#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A, B;
    cin >> A >> B;

    int over_length = (A.length() < B.length()) ? B.length() - A.length() : A.length() - B.length();
    string shorter_one = (A.length() < B.length()) ? A : B;
    string longger_one = (A.length() < B.length()) ? B : A;

    reverse(shorter_one.begin(), shorter_one.end());
    reverse(longger_one.begin(), longger_one.end());

    for (int i = 0; i < over_length; i++)
    {
        shorter_one += '0';
    }

    int upper = 0;
    string res = "";
    for (int i = 0; i < longger_one.length(); i++)
    {
        int num = shorter_one[i] - '0' + longger_one[i] - '0' + upper;

        if (num >= 10)
        {
            num -= 10;
            upper = 1;
        }
        else
            upper = 0;
        res += to_string(num);
    }

    if (upper == 1)
        res += '1';

    reverse(res.begin(), res.end());
    cout << res;

    return 0;
}