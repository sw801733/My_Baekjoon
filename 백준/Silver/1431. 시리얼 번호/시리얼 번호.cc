#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<string> my_v;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        my_v.push_back(str);
    }

    sort(my_v.begin(), my_v.end(),
         [](string a, string b)
         {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else if (a.length() == b.length())
             {
                 int a_sum = 0;
                 int b_sum = 0;

                 for (int i = a.length() - 1; i >= 0; i--)
                 {
                     if (a[i] >= '0' && a[i] <= '9')
                     {
                         a_sum += a[i] - '0';
                     }
                 }

                 for (int i = b.length() - 1; i >= 0; i--)
                 {
                     if (b[i] >= '0' && b[i] <= '9')
                     {
                         b_sum += b[i] - '0';
                     }
                 }
                 if (a_sum != b_sum)
                     return a_sum < b_sum;
                 else
                     return a < b;
             }
         });

    for (string str : my_v)
        cout << str << "\n";

    return 0;
}