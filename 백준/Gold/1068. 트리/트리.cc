#include <bits/stdc++.h>
using namespace std;

int N, M;

vector<int> adj[1004];

int del_N;
int leaf_cnt = 0;

int dfs(int here)
{
    int ret = 0;
    int child = 0;
    for (int there : adj[here])
    {
        if (there == del_N)
            continue;
        ret += dfs(there);
        child++;
    }

    if (child == 0)
        return 1;
    else
        return ret;
}

int main()
{
    int N;
    int root;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        if (a == -1)
            root = i;
        else
            adj[a].push_back(i);
    }

    cin >> del_N;
    if (root == del_N)
        cout << "0";
    else
    {
        leaf_cnt = dfs(root);
        cout << leaf_cnt;
    }

    return 0;
}
