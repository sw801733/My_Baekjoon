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

    int arrForPlanetX[50];
    int arrForPlanetY[50];
    int arrForPlanetr[50];

    for(int i = 0; i < T; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        int cnt = 0;
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            int cx,cy,r;
            cin >> cx >> cy >> r;

            int dis1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
            int dis2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
            if (r * r > dis1 && r * r < dis2)
                cnt++;
            else if (r * r < dis1 && r * r > dis2)
                cnt++;
        }
        cout << cnt << "\n";
        

    }

    return 0;
}