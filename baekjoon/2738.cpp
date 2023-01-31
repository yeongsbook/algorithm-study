// https://www.acmicpc.net/problem/2738

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, M;
  int array[100][100] = {0};
  int value;

  scanf("%d %d", &N, &M);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &value);
      array[i][j] += value;
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &value);
      array[i][j] += value;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}