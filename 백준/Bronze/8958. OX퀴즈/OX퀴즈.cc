#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string str;
        cin >> str;
        int score = 0;
        int temp = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'O')
            {
                temp++;
                score += temp;
                // cout << score << "\n";
            }
            else
            {
                temp = 0;
            }
        }
        cout << score << "\n";
    }
    return 0;
}
