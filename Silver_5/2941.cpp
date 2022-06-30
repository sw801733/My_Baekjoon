#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Croatia_Alphabet(string str)
{
    int cnt = str.size();
    for(int i = 1; i < str.size(); i++)
    {
        if (str[i] == '=')
        {
            if ((str[i - 1] == 'c') || (str[i - 1] == 's'))
            {
                cnt -= 1;
            }
            if (str[i - 1] == 'z')
            {
              
                if ((str[i - 2] == 'd') && i >= 2)
                    cnt -= 2;
                else
                    cnt -= 1;
            
                

            }
        }
        else if (str[i] == '-')
        {
            if ((str[i - 1] == 'c') || (str[i - 1] == 'd'))
                cnt -= 1;
        }
        else if (str[i] == 'j')
        {
            if ((str[i - 1] == 'l') || (str[i - 1] == 'n'))
                cnt -= 1;
        }
    }

    return cnt;
}

int main()
{
    string str;
    int cnt = 0;
    cin >> str;
    
    cout << Croatia_Alphabet(str);

    return 0;
}