// 탄산 음료
// https://www.acmicpc.net/problem/5032

#include <stdio.h>
#pragma warning(disable:4996)

int main() {    
    int e, f, c, tot = 0;
    scanf("%d %d %d", &e, &f, &c);

    while(e+f >= c) {
        tot += (e+f) / c;

        if((e+f) % c != 0) {
            f = (e+f) % c;
        }
        e /= c;
    }

    printf("%d", tot);
    return 0;
}