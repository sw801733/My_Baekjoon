#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    string patten;
    cin >> N;
    cin >> patten;

    int star_index = patten.find('*');

    for (int i = 0; i < N; i++)
    {
        string str;
        int flag = 0;
        cin >> str;

        for (int i = 0; i < star_index; i++)
        {
            if (str[i] != patten[i])
            {
                flag = 1;
                break;
            }
        }
        str.erase(0, star_index);
        int temp = patten.length() - 1 - star_index;
        for (int i = star_index + 1; i < patten.length(); i++)
        {
            if (str[str.length() - temp] != patten[i])
            {
                flag = 1;
                break;
            }
            temp--;
        }

        if (flag == 0)
        {
            cout << "DA"
                 << "\n";
        }
        else
            cout << "NE"
                 << "\n";
    }

    return 0;
}
