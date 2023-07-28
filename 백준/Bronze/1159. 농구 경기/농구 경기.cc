#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[26] = {
        0,
    };

    int N;
    int flag = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        arr[str[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 5)
        {
            cout << (char)('a' + i);
            flag = 1;
        }
    }

    if (flag == 0)
        cout << "PREDAJA";

    return 0;
}
