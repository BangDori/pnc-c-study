// 계단 오르기
// https://www.acmicpc.net/problem/2579

#include <stdio.h>

int max(int, int);

int main() {
    int stair[301] = { 0 }, dp[301] = { 0 };
    int count, i, loc = 0, tot = 0;

    printf("Input count: ");
    scanf("%d", &count);

    for(i = 0; i < count; i++) {
        scanf("%d", &stair[i]);
    }

    dp[0] = stair[0];
    dp[1] = max(stair[0]+stair[1],stair[1]);
    dp[2] = max(stair[0]+stair[2],stair[1]+stair[2]);
 
    for (i = 3; i < count; i++) {
        dp[i] = max(dp[i-2]+stair[i], stair[i-1]+stair[i]+dp[i-3]);
    }

    printf("%d\n", dp[i-1]);

    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

// 10 (100 100 1 1 100 100 1 1000 1000 1000) => 2302
// 3 (40 50 60) => 110
// 3 (30 20 10) => 40
// 3 (10 5 20) => 30