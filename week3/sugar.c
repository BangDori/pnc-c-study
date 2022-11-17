// 설탕 배달
// https://www.acmicpc.net/problem/2839

#include <stdio.h>

int main() {
    int n, big_basket = 0, small_basket = 0;

    scanf("%d", &n);

    while(n > 0) {
        if(n % 5 == 0) {
            big_basket = n / 5;
            n = 0;
        }

        if(n >= 3) {
            n -= 3;
            small_basket += 1;
        } else if(n >= 1) {
            printf("-1\n");
            return 0;
        }
    }

    printf("%d\n", big_basket + small_basket);

    return 0;
}