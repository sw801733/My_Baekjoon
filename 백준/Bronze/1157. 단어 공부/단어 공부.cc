#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int arr[28] = {
        0,
    };

    for (int i = 0; i < word.length(); i++)
    {
        arr[tolower(word[i]) - 'a']++;
    }

    int max_num = 0;
    char answer;
    for (int i = 0; i < word.length(); i++)
    {
        if (max_num < arr[tolower(word[i]) - 'a'])
        {
            max_num = arr[tolower(word[i]) - 'a'];
            answer = toupper(word[i]);
        }
    }

    for (int i = 0; i < word.length(); i++)
    {
        if (max_num == arr[tolower(word[i]) - 'a'] && answer != toupper(word[i]))
        {
            answer = '?';
        }
    }

    cout << answer;
    return 0;
}