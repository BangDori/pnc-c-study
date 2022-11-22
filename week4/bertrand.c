// 베르트랑 공준
// https://www.acmicpc.net/problem/4948

#include <stdio.h>
#pragma warning(disable:4996)

int findFrime(int);

int main() {
    int n;

    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        printf("%d\n", findFrime(n));
    }

    return 0;
}

int findFrime(int n) {
    int i, j, tot = 0;

    if(n == 1) return 1;

    for(i = n+1; i < 2*n; i++) {
        if(i % 2 == 0) continue;

        for(j = 3; j < i; j++)
            if(i % j == 0) break;
        if(i == j) tot++;
    }

    return tot;
}