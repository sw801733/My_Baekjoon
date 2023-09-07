#include <bits/stdc++.h>
using namespace std;

int N;
int combi_size = 21;
int k;

vector<vector<int>> my_v;

void combi(int start, vector<int> v)
{
    if (combi_size == v.size())
    {
        my_v.push_back(v);
        return;
    }

    for (int i = start; i < k; i++)
    {
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
}

int arr[3] = {
    0,
};

int a[3] = {1, 2, 3};
int hp[3] = {9, 3, 1};

vector<vector<int>> b;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int min_cnt = 21;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int idx = 0;
    do
    {
        vector<int> temp;
        for (int i = 0; i < N; i++)
        {
            temp.push_back(a[i]);
        }
        b.push_back(temp);
    } while (next_permutation(a, a + N));

    vector<int> v;
    k = b.size();
    combi(0, v);

    for (int i = 0; i < my_v.size(); i++)
    {
        int cnt = 0;
        int temp[3] = {
            0,
        };
        for (int j = 0; j < N; j++)
            temp[j] = arr[j];

        for (int n : my_v[i])
        {
            if (temp[0] <= 0 && temp[1] <= 0 && temp[2] <= 0)
                break;
            int idx = 0;
            for (int m : b[n])
            {
                temp[m - 1] -= hp[idx];
                idx++;
            }
            cnt++;
        }

        min_cnt = min(min_cnt, cnt);
    }

    cout << min_cnt;

    return 0;
}