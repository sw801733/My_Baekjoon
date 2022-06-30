#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int Group_Word_Check(string str)
{
    char temp = str[0];
    vector<char> my_v;
    my_v.push_back(temp);
    for(int i = 1; i < str.size(); i++)
    {
        if (temp != str[i])
        {
            auto f = find(my_v.begin(),my_v.end(),str[i]);
            if (f != my_v.end())
            {
                return 0;
            }
            my_v.push_back(str[i]);
        }
        temp = str[i];
    }
    return 1;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    int cnt = 0;
    string str;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        cnt += Group_Word_Check(str);
    }
    cout << cnt;

    return 0;
}