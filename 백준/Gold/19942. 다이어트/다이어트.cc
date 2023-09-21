#include <bits/stdc++.h>

using namespace std;

int N;
int mp, mf, ms, mv, price;

struct A
{
    int mp, mf, ms, mv, price;
} arr[16];

map<int, vector<vector<int>>> ret_v;

int ret = 500 * 100;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cin >> mp >> mf >> ms >> mv;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].mp >> arr[i].mf >> arr[i].ms >> arr[i].mv >> arr[i].price;
    }

    for (int i = 0; i < (1 << N); i++)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int sum = 0;
        vector<int> v;

        for (int j = 0; j < N; j++)
        {

            if (i & (1 << j))
            {
                v.push_back(j + 1);
                a += arr[j].mp;
                b += arr[j].mf;
                c += arr[j].ms;
                d += arr[j].mv;

                sum += arr[j].price;
            }
        }
        if (a >= mp && b >= mf && c >= ms && d >= mv)
        {
            if (ret >= sum)
            {
                ret = sum;
                ret_v[ret].push_back(v);
            }
        }
    }
    if (ret == 500 * 100)
        cout << -1;
    else
    {
        sort(ret_v[ret].begin(), ret_v[ret].end());
        cout << ret << "\n";
        for (int n : ret_v[ret][0])
        {
            cout << n << " ";
        }
    }

    return 0;
}