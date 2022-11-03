// 색종이
// https://www.acmicpc.net/problem/2563

#include <stdio.h>

int main() {
    int paper[101][101] = { 0 };
    int count, x, y, area = 0;
    int i, j;

    printf("input count: ");
    scanf("%d", &count);

    while(count-- > 0) {
        printf("input x,y: ");
        scanf("%d %d", &x, &y);

        for(i = y; i < y+10; i++) {
            for(j = x; j < x+10; j++) {
                if(paper[i][j] == 0) {
                    paper[i][j] = 1;
                }
                printf("(%d, %d)\n", y, x);

            }
        }
    }

    for(i = 0; i < 101; i++) {
        for(j = 0; j < 101; j++) {
            if(paper[i][j] == 1) area += 1;
        }
    }

    printf("%d", area);

    return 0;
}

// 3 - (3, 7) (15, 7) (5, 2) => 260
// 3 - (10, 10) (10, 10) (10, 10) => 100
// 2 - (0, 0) (9, 9) => 199