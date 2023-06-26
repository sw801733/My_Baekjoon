#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int seconds = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'C')
        {
            seconds += 3;
        }
        else if (word[i] >= 'D' && word[i] <= 'F')
        {
            seconds += 4;
        }
        else if (word[i] >= 'G' && word[i] <= 'I')
        {
            seconds += 5;
        }
        else if (word[i] >= 'J' && word[i] <= 'L')
        {
            seconds += 6;
        }
        else if (word[i] >= 'M' && word[i] <= 'O')
        {
            seconds += 7;
        }
        else if (word[i] >= 'P' && word[i] <= 'S')
        {
            seconds += 8;
        }
        else if (word[i] >= 'T' && word[i] <= 'V')
        {
            seconds += 9;
        }
        else if (word[i] >= 'W' && word[i] <= 'Z')
        {
            seconds += 10;
        }
    }
    cout << seconds;

    return 0;
}