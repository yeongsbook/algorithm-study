// https://www.acmicpc.net/problem/2562

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, max, maxIndex;

  for (int i = 0; i < 9; i++) {
    scanf("%d", &A);
    if (i == 0) {
      max = A;
      maxIndex = i;
      continue;
    }
    if (A > max) {
      max = A;
      maxIndex = i;
    }
  }
  printf("%d\n%d", max, maxIndex + 1);
  return 0;
}