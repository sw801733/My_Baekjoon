#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int DP[101][100001];
int W[101];
int V[101];

int main()
{
    int H, W, N, M;

    cin >> H >> W >> N >> M;

    int h = H / (N + 1);

    if (H % (N + 1))
        h++;

    int m = W / (M + 1);

    if (W % (M + 1))
        m++;

    cout << h * m;
}