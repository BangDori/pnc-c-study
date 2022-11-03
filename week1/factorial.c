// 팩토리얼
// https://www.acmicpc.net/problem/10872

// 1-1
#include <stdio.h>

int main() {
    int num, result = 1;
    printf("input num: ");
    scanf("%d", &num);

    for(; num >= 2; num--) {
        result *= num;
    }

    printf("%d", result);

    return 0;
}

// =================================================

// // 1-2
// #include <stdio.h>

// int factorial(int);

// int main() {
//     int num;
//     printf("input num: ");
//     scanf("%d", &num);

//     printf("%d", factorial(num));

//     return 0;
// }

// int factorial(int num) {
//     if(num > 1) {
//         return factorial(num-1) * num;
//     } else {
//         return 1;
//     }
// }