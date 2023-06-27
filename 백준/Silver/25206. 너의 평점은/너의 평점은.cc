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
    double sum = 0;
    double credit_sum = 0;
    for (int i = 0; i < 20; i++)
    {
        string str;
        getline(cin, str);

        vector<string> my_v;

        stringstream ss(str);
        string temp;
        double credit = 0;
        while (getline(ss, temp, ' '))
        {
            my_v.push_back(temp);
        }
        if (my_v[2] != "P")
        {
            credit = stod(my_v[1]);
            credit_sum += credit;
        }

        if (my_v[2] == "A+")
        {
            sum += credit * 4.5;
        }
        else if (my_v[2] == "A0")
        {
            sum += credit * 4.0;
        }
        else if (my_v[2] == "B+")
        {
            sum += credit * 3.5;
        }
        else if (my_v[2] == "B0")
        {
            sum += credit * 3.0;
        }
        else if (my_v[2] == "C+")
        {
            sum += credit * 2.5;
        }
        else if (my_v[2] == "C0")
        {
            sum += credit * 2.0;
        }
        else if (my_v[2] == "D+")
        {
            sum += credit * 1.5;
        }
        else if (my_v[2] == "D0")
        {
            sum += credit * 1.0;
        }
        else if (my_v[2] == "F")
        {
            sum += credit * 0.0;
        }
    }
    cout << sum / credit_sum;
    return 0;
}