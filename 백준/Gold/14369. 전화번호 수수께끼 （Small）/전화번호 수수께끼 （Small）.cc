#include <bits/stdc++.h>

using namespace std;

string numToString(int n)
{
    string num[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

    return num[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    pair<char, int> uni[10] = {
        {'Z', 0},
        {'X', 6},
        {'S', 7},
        {'V', 5},
        {'F', 4},
        {'R', 3},
        {'G', 8},
        {'W', 2},
        {'O', 1},
        {'N', 9}};
    // char uni[10] = {'Z', 'X', 'S', 'V', 'F', 'R', 'G', 'W', 'O', 'N'};
    map<string, int> m;
    int case_cnt = 1;

    cin >> N;

    while (N--)
    {
        string S;
        string res = "";
        cin >> S;

        for (int i = 0; i < 10; i++)
        {
            if (S.find(uni[i].first) != string::npos)
            {
                res += to_string(uni[i].second);
                string erase_str = numToString(uni[i].second);

                for (char c : erase_str)
                {
                    S.erase(find(S.begin(), S.end(), c));
                }
                i = -1;
            }
        }

        sort(res.begin(), res.end());
        cout << "Case #" << case_cnt << ": " << res << "\n";
        case_cnt++;
    }

    return 0;
}