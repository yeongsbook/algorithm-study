// https://www.acmicpc.net/problem/10817

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  if (B > A) {
    int temp = A;
    A = B;
    B = temp;
  }
  if (C > B) {
    int temp = B;
    B = C;
    C = temp;
  }
  if (B > A) {
    int temp = A;
    A = B;
    B = temp;
  }
  printf("%d", B);
  return 0;
}