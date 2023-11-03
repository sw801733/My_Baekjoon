#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, M;

    int country[1001];

    int gold[1001];
    int silver[1001];
    int bronze[1001];

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        int country;
        cin >> country;

        int g, s, b;
        cin >> g >> s >> b;

        gold[country] = g;
        silver[country] = s;
        bronze[country] = b;
    }

    for (int i = 1; i < 1001; i++)
    {
        country[i] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        if (gold[M] < gold[i])
        {
            silver[i] = 0;
            bronze[i] = 0;
            country[M]++;
        }
        else if (gold[M] > gold[i])
        {
            silver[i] = 0;
            bronze[i] = 0;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (silver[M] < silver[i])
        {
            bronze[i] = 0;
            country[M]++;
        }
        else if (silver[M] > silver[i])
        {
            bronze[i] = 0;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (bronze[M] < bronze[i])
        {
            country[M]++;
        }
    }

    cout << country[M];
}