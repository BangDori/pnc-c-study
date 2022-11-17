#include<stdio.h>

int main() {
   int A = 0;
   int B = 0;
   int V = 0;
   int move = 0;
   int day = 0;
   scanf_s("%d %d %d", &A, &B, &V);

   for (day = 1; move < V; day++) {
      move += A;
      if (move >= V) {
         printf("달팽이가 막대를 오르는데 걸린 시간은 %d일", day);
      }
      else
         move -= B;
      
   }
   return 0;
}   