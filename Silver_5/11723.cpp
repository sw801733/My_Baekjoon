#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> my_v;

void set_operation(string str)
{

    if (str == "all")
    {
        while(!(my_v.empty()))
            my_v.pop_back();
        
        for(int i = 1; i <= 20; i++)
            my_v.push_back(i);
    }
    else if (str == "empty")
    {
        while(!(my_v.empty()))
            my_v.pop_back();
    }
    else
    {
        int m;
        cin >> m;
        auto f = find(my_v.begin(),my_v.end(),m);

        if (str == "add")
        {
            if (f == my_v.end())
                my_v.push_back(m);
        }
        else if (str == "remove")
        {
            if (f != my_v.end())
                my_v.erase(f);
        }
        else if (str == "check")
        {
            if (f != my_v.end())
                cout << 1 << "\n";
            else   
                cout << 0 << "\n";
        }
        else if (str == "toggle")
        {
            if (f != my_v.end())
                my_v.erase(f);
            else
                my_v.push_back(m);
        }
    }


    return;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;


    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        set_operation(str);
    }

    return 0;
}