// 카드 역배치
// https://www.acmicpc.net/problem/10804

#include <stdio.h>

int main() {
    int card[21];
    int st, en, count = 10, temp;

    for(int i = 1; i <= 20; i++) card[i] = i;

    while(count-- > 0) {
        scanf("%d %d", &st, &en);

        while(st <= en) {
            
            temp = card[st];
            card[st] = card[en];
            card[en] = temp;

            st++;
            en--;
        }
    }

    for(int i = 1; i <= 20; i++) printf("%d ", card[i]);
    printf("\n");

    return 0;
}