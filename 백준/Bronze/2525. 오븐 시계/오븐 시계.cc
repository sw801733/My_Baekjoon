#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    int hr_plus = C / 60;
    int min_plus = C % 60;

    int next_B = (B + min_plus) % 60;

    int next_A = (A + hr_plus + (B + min_plus) / 60) % 24;

    printf("%d %d", next_A, next_B);

    return 0;
}