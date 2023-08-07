#include <bits/stdc++.h>

using namespace std;

char cnt[100] = {
    0,
};

int main()
{
    string str;
    cin >> str;

    for (char a : str)
        cnt[a]++;

    char mid;
    int flag = 0;
    string ret = "";
    for (int i = 'Z'; i >= 'A'; i--)
    {
        if (cnt[i])
        {
            if (cnt[i] % 2 == 1)
            {
                mid = char(i);
                flag++;
                cnt[i]--;
            }

            if (flag == 2)
                break;

            for (int j = 0; j < cnt[i]; j += 2)
            {
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if (mid)
        ret.insert(ret.begin() + ret.size() / 2, mid);
    if (flag == 2)
        cout << "I'm Sorry Hansoo";
    else
        cout << ret;
    return 0;
}
