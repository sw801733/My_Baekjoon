#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string answer;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        if (i == 0)
            answer = str;
        else
        {
            for (int j = 0; j < str.length(); j++)
            {
                if (answer[j] != str[j])
                    answer[j] = '?';
            }
        }
    }

    cout << answer;

    return 0;
}
