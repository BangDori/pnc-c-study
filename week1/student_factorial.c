// 강명구, 정유진
// 1 - loop
// #include<stdio.h>

// int main() {
//    int fac=1;
//    int n = 0;
//    scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++) {
//       fac *= i;
//    }
//    printf("%d", fac);
//    return 0;
// }

// for문의 동작에서 1은 곱해도 1이기 때문에 2부터 곱을 시작해도
// 상관이 없다.

// 2 - recursive
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fact(int n) 
{
	if (n == 0)
		return 1;
	return n * Fact(n - 1);
}
int main(void)
{
	int N;
	scanf("%d", &N);
	if (N == 0) 
	{
		printf("%d", 1);
		return 0;
	}
	printf("%d", Fact(N));
	return 0;
}

// 재귀함수와 