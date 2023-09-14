#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

char op[9];

vector<string> str_v;

void makePermutation(int n, int r, int depth)
{
    if (r == depth)
    {
        string temp = "";

        int flag = 0;
        for (int i = 0; i < r - 1; i++)
        {
            if (op[i] == '>')
            {
                if (arr[i] < arr[i + 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (op[i] == '<')
            {
                if (arr[i] > arr[i + 1])
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            for (int i = 0; i < r; i++)
            {
                temp += to_string(arr[i]);
            }
            str_v.push_back(temp);

            return;
        }
    }

    for (int i = depth; i < n; i++)
    {
        swap(arr[i], arr[depth]);
        makePermutation(n, r, depth + 1);
        swap(arr[i], arr[depth]);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> op[i];
    }

    makePermutation(10, k + 1, 0);

    sort(str_v.begin(), str_v.end());

    cout << str_v[str_v.size() - 1] << "\n";
    cout << str_v[0];

    return 0;
}
