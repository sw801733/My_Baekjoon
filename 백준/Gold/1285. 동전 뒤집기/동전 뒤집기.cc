#include <bits/stdc++.h>

using namespace std;

const int INF = 987654321;

int n, a[44], ret = INF;
string s;

// 한 행씩 증가하면서 최솟값 구하기
void go(int here)
{
    if (here == n + 1)
    {
        int sum = 0;
        // n 을 ~로 뒤집게 되면 -(n + 1) 이 되어버리므로 n - 1 까지의 비트
        // 즉, 연산에 필요한 부분만 사용
        for (int i = 1; i <= (1 << n - 1); i *= 2)
        {
            int cnt = 0;
            // 한 행씩 증가하면서 i 를 통해 열을 체크하며
            // T 의 개수 확인
            for (int j = 1; j <= n; j++)
                if (a[j] & i)
                    cnt++;
            // 행을 뒤집고 열을 뒤집는 과정 없이 (2의 40승의 경우의 수 -> 시간초과) 행을 뒤집은 경우에서
            // 열의 T (cnt) 값과 H (n-cnt) 값을 통해 열을 뒤집은 경우와 그렇지 않은 경우를 판단할 수 있다. (2의 20 승 -> 시간 초과 안됨)
            sum += min(cnt, n - cnt);
        }
        ret = min(ret, sum);
        return;
    }

    // 뒤집지 않고 다음 행
    go(here + 1);
    // 뒤집기
    a[here] = ~a[here];
    // 뒤집고 다음 행
    go(here + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        int value = 1;
        // 받은 문자열을 비트 연산을 위한 숫자로 표현
        // 예를 들어 THH == 100 == 4
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'T')
                a[i] |= value;
            value *= 2;
        }
    }

    go(1);

    cout << ret << "\n";

    return 0;
}