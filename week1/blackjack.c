// 블랙잭
// https://www.acmicpc.net/problem/2798

#include <stdio.h>

int main() {
    int card[101] = { 0 }, sel[101] = { 0 }; 
    int n, m, i, x = 0, y = 1, z = 2, tot = 0;

    printf("Input card, tot: ");
    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }

    while(x < n-3) {
        if(z >= n) {
            y += 1;
            z = y + 1;
        }

        if(y >= n-1) {
            x += 1;
            y = x + 1;
            z = y + 1;
        }

        if(card[x] + card[y] + card[z] <= m && card[x] + card[y] + card[z] >= tot) {
            tot = card[x] + card[y] + card[z]; 
        }
        z++;
    }

    printf("%d", tot);

    return 0;
}
