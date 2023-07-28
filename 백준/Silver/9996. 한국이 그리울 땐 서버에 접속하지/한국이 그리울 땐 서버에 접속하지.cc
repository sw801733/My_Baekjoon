#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    string patten;
    cin >> N;
    cin >> patten;

    int star_index = patten.find('*');
    string pre = patten.substr(0, star_index);
    string post = patten.substr(star_index + 1);

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        if (pre.length() + post.length() > str.length())
            cout << "NE"
                 << "\n";
        else
        {
            if (str.substr(0, star_index) == pre && str.substr(str.length() - post.length()) == post)
                cout << "DA"
                     << "\n";
            else
                cout << "NE"
                     << "\n";
        }
    }

    return 0;
}
