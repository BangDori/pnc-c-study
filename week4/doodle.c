// 낙서
// https://www.acmicpc.net/problem/5025

#include <stdio.h>
#pragma warning(disable:4996)

int paper[20000][20000] = { 0 };
int doodle(int, int, int);

int main() {
    int test, x, y;

    scanf("%d", &test);
    for(int i = 1; i <= test; i++) {
        scanf("%d %d", &x, &y);

        printf("%d\n", doodle(x, y, i));
    }

    return 0;
}

int doodle(int x, int y, int test) {
    int tot = 1;
    int pos_x = 0, pos_y = 0;
    int dir_x = 1, dir_y = 1;

    paper[pos_x++][pos_y++] = test;
    while(pos_x != 0 || pos_y != 0) {
        if(pos_x + dir_x >= x || pos_x + dir_x < 0) {
            dir_x *= -1;
        }
        if(pos_y + dir_y >= y || pos_y + dir_y < 0) {
            dir_y *= -1;
        }

        if(paper[pos_y + dir_y][pos_x + dir_x] != test) {
            paper[pos_y + dir_y][pos_x + dir_x] = test;
            tot++;
        }
    
        pos_x += dir_x;
        pos_y += dir_y;
    }

    return tot;
}