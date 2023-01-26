// https://www.acmicpc.net/problem/2775

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int T, K, N;

  scanf("%d", &T);

  for (int i = 0; i < T; i++) {
    scanf("%d\n%d", &K, &N);
    int array[15][15] = {0};

    for (int j = 0; j <= K; j++) {
      for (int k = 1; k <= N; k++) {
        if (j == 0) {
          array[j][k] = k;
        } else {
          for (int l = 1; l <= k; l++) {
            array[j][k] += array[j - 1][l];
          }
        }
      }
    }

    printf("%d\n", array[K][N]);
  }
  return 0;
}