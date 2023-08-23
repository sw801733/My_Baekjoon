#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int team_1_sum_min = 0;
    int team_1_sum_sec = 0;
    int team_1_win_min = 0;
    int team_1_win_sec = 0;
    int team_1_goal = 0;
    int team_1_flag = 0;

    int team_2_sum_min = 0;
    int team_2_sum_sec = 0;
    int team_2_win_min = 0;
    int team_2_win_sec = 0;
    int team_2_goal = 0;
    int team_2_flag = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int a, m, s;
        scanf("%d %d:%d", &a, &m, &s);

        if (a == 1)
            team_1_goal++;
        else if (a == 2)
            team_2_goal++;

        if (team_1_goal > team_2_goal && team_1_flag == 0)
        {
            team_1_win_min = m;
            team_1_win_sec = s;

            team_1_flag = 1;
        }
        else if (team_1_goal < team_2_goal && team_2_flag == 0)
        {
            team_2_win_min = m;
            team_2_win_sec = s;

            team_2_flag = 1;
        }

        if (team_1_goal == team_2_goal)
        {
            if (team_1_flag)
            {
                team_1_sum_min += m - team_1_win_min;

                if (s - team_1_win_sec < 0)
                {
                    team_1_sum_sec += s - team_1_win_sec + 60;
                    team_1_sum_min--;
                }
                else
                    team_1_sum_sec += s - team_1_win_sec;

                if (team_1_sum_sec >= 60)
                {
                    team_1_sum_min++;
                    team_1_sum_sec -= 60;
                }

                team_1_win_min = 0;
                team_1_win_sec = 0;

                team_1_flag = 0;
            }
            if (team_2_flag)
            {
                team_2_sum_min += m - team_2_win_min;

                if (s - team_2_win_sec < 0)
                {
                    team_2_sum_sec += s - team_2_win_sec + 60;
                    team_2_sum_min--;
                }
                else
                    team_2_sum_sec += s - team_2_win_sec;

                if (team_2_sum_sec >= 60)
                {
                    team_2_sum_min++;
                    team_2_sum_sec -= 60;
                }
                team_2_win_min = 0;
                team_2_win_sec = 0;

                team_2_flag = 0;
            }
        }
    }

    if (team_1_flag)
    {
        team_1_sum_min += 48 - team_1_win_min;

        if (team_1_win_sec != 0)
        {
            team_1_sum_sec += 60 - team_1_win_sec;
            team_1_sum_min--;
        }
        if (team_1_sum_sec >= 60)
        {
            team_1_sum_min++;
            team_1_sum_sec -= 60;
        }
    }
    if (team_2_flag)
    {
        team_2_sum_min += 48 - team_2_win_min;

        if (team_2_win_sec != 0)
        {
            team_2_sum_sec += 60 - team_2_win_sec;
            team_2_sum_min--;
        }
        if (team_2_sum_sec >= 60)
        {
            team_2_sum_min++;
            team_2_sum_sec -= 60;
        }
    }

    printf("%02d:%02d\n", team_1_sum_min, team_1_sum_sec);
    printf("%02d:%02d", team_2_sum_min, team_2_sum_sec);
}
