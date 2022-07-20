#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    map<string, int>m1;
    map<int, string>m2;

    cin >> N >> M;

    for(int i = 1; i <= N; i++)
    {
        string str;
        cin >> str;
        m1[str] = i;
        m2[i] = str;
    }

    for(int i = 0; i < M; i++)
    {
        string str;
        cin >> str;

        if(m1.find(str) != m1.end())
            cout << m1[str] << "\n";
        else
        {
            int number = stoi(str);
            cout << m2[number] << "\n";
        }
    }

    return 0;
}