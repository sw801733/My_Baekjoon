#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

bool check(string a, string b, int strike_cnt, int ball_cnt)
{
    int s_cnt = 0;
    int b_cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == b[i])
            s_cnt++;
        else if (find(a.begin(), a.end(), b[i]) != a.end())
            b_cnt++;
    }
    if (s_cnt == strike_cnt && b_cnt == ball_cnt)
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int cnt = 0;

    vector<pair<string, int>> v;
    do
    {
        string temp = "";
        for (int i = 0; i < 3; i++)
        {
            temp += to_string(arr[i]);
        }

        v.push_back({temp, 0});
        reverse(arr + 3, arr + 9);
    } while (next_permutation(arr, arr + 9));

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string num;
        int strike_cnt, ball_cnt;
        bool result;

        cin >> num;
        cin >> strike_cnt >> ball_cnt;

        for (int j = 0; j < v.size(); j++)
        {
            bool result;
            result = check(num, v[j].first, strike_cnt, ball_cnt);
            if (result == true)
                v[j].second++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second == N)
            cnt++;
    }

    cout << cnt;
    return 0;
}
