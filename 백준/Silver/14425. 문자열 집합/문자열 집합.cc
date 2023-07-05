#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    vector<string> S;
    int cnt = 0;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        S.push_back(str);
    }
    sort(S.begin(), S.end());
    for (int i = 0; i < M; i++)
    {
        string str;
        cin >> str;
        if (binary_search(S.begin(), S.end(), str) == 1)
            cnt++;
    }

    cout << cnt;

    return 0;
}