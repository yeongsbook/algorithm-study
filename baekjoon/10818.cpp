// https://www.acmicpc.net/problem/10818

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, A, min, max;

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", &A);
    if (i == 0) {
      min = A;
      max = A;
      continue;
    }
    if (A < min) {
      min = A;
    }
    if (A > max) {
      max = A;
    }
  }
  printf("%d %d", min, max);
  return 0;
}