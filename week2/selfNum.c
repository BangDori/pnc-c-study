#include <stdio.h>

int d(int[], int);

int main() {
    int selfNum[10001] = { 0 };
    int i;

    for(i = 1; i <= 10000; i++) {
        if(selfNum[i] != 0) continue;

        d(selfNum, i);
    }

    for(i = 1; i <= 10000; i++)
        if(selfNum[i] == 0) printf("%d\n", i);

    return 0;
}

int d(int selfNum[], int n) {
    int num = n;

    while(n > 0) {
        num += (n % 10);

        n /= 10;
    }

    if(num > 10000) return -1;

    selfNum[num]++;
    return d(selfNum, num);
}