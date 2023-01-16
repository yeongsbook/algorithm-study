// https://www.acmicpc.net/problem/10871

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, X, A;

  scanf("%d %d", &N, &X);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A);
    if (A < X) {
      printf("%d ", A);
    }
  }
  return 0;
}