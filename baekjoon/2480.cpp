// https://www.acmicpc.net/problem/2480

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  if (A == B && B == C) {
    printf("%d", 10000 + A * 1000);
  } else if (A == B || A == C) {
    printf("%d", 1000 + A * 100);
  } else if (B == C) {
    printf("%d", 1000 + B * 100);
  } else {
    int maxValue = A > B ? A : B;
    if (C > maxValue) {
      maxValue = C;
    }
    printf("%d", maxValue * 100);
  }
  return 0;
}