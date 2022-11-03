// 달팽이는 올라가고 싶다
// https://www.acmicpc.net/problem/2869

// 1-1
// #include <stdio.h>

// int main() {
//     int a, b, v;
//     int tot = 0, days=0;

//     printf("input: ");
//     scanf("%d %d %d", &a, &b, &v);

//     if(a <= b) {
//         printf("Cannot go up");
//         return 0;
//     }

//     while (1) {
//         days += 1;
//         tot += a;
    
//         if(tot >= v) break;
//         tot -= b;
//     };

//     printf("%d", days);

//     return 0;
// }

// 1-2
#include <stdio.h>

int main(){
	int a,b,v; // 달팽이가 낮에 올라갈수 있는 높이 a, 미끄러지는 높이 b, 나무의 높이 v
	
	scanf("%d %d %d", &a, &b, &v);
	
	if((v - a) % (a - b) == 0) printf("%d", (v-a)/(a-b) + 1);
	else printf("%d", (v-a)/(a-b) + 2);
}

// 반례
// 2 1 5 => 4
// 5 1 6 => 2
// 100 99 1000000000 => 999999901
// 3 1 3 => 1
// 4 2 7 => 3
// 2 1 2 => 1