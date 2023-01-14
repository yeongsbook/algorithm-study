// https://www.acmicpc.net/problem/2439

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;

  scanf("%d", &N);

  for (int i = 1; i < N + 1; i++) {
    for (int j = 0; j < N - i; j++) {
      printf(" ");
    }
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}