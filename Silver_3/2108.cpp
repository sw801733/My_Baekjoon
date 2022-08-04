#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int N;
    vector<int> my_m;
    vector<pair<int, int>> vectorForMost;

    double sum = 0;
    int average;
    int middle;
    int most;
    int range;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        sum += a;

        my_m.push_back(a);
    }

    sort(my_m.begin(), my_m.end(),
    [](int a, int b)
    {
        return a > b;
    }
    );
    average = round(sum / N);
    middle = my_m[N /2];
    range = abs(my_m.front() - my_m.back());
    most = my_m[0];

    int cnt = 0;

    if (my_m.size() > 1)
    {
        for(int i = 1; i < N; i++)
        {
            if (my_m[i] == my_m[i - 1])
                cnt++;
            else
            {
                vectorForMost.push_back(make_pair(my_m[i - 1], cnt));
                cnt = 0;
            }
        }

        vectorForMost.push_back(make_pair(my_m.back(), cnt));
        
        sort(vectorForMost.begin(), vectorForMost.end(),
        [](auto a, auto b)
        {
            if (a.second == b.second)
                return a.first < b.first;
            else
                return a.second > b.second;
        }
        );

        if (vectorForMost[0].second == vectorForMost[1].second)
        {
            most = vectorForMost[1].first;
        }
        else
            most = vectorForMost[0].first;

    }
    

    
    cout << average << "\n";
    cout << middle << "\n";
    cout << most << "\n";
    cout << range << "\n";

    return 0;
}