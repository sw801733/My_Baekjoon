#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int alpabet[26] = {
        -1,
    };

    for (int i = 0; i < 26; i++)
    {
        alpabet[i] = -1;
    }

    for (int i = 0; i < S.length(); i++)
    {
        if (alpabet[S[i] - 'a'] == -1)
            alpabet[S[i] - 'a'] = i;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpabet[i] << " ";
    }
}