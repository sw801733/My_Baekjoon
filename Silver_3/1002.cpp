#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        double x1, y1, r1, x2, y2, r2;
        double d;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = sqrt(pow(x1 - x2, 2) + pow(y1-y2, 2));

        double diff_r = abs(r1 - r2);
        double sum_r = abs(r1 + r2);

        // when two circles are equaled
        if (x1 == x2 && y1 == y2 && r1 == r2)
            cout << -1 << "\n";  
        // when two circles have no contact
        else if (sum_r < d || diff_r > d || d == 0)
            cout << 0 << "\n";
        // when two circles have 1 contact
        else if (sum_r == d || diff_r == d)
            cout << 1 << "\n";
        // when two circles have 2 contacts
        else if (diff_r < d && d < sum_r)
            cout << 2 << "\n";

    }

    return 0;
}