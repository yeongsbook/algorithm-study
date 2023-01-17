// https://www.acmicpc.net/problem/4344

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int C, N;
  int array[1001];

  scanf("%d", &C);

  for (int i = 0; i < C; i++) {
    scanf("%d", &N);
    int sum = 0;
    for (int j = 0; j < N; j++) {
      scanf("%d", &array[j]);
      sum += array[j];
    }
    float average = float(sum) / N;
    float count = 0;
    for (int j = 0; j < N; j++) {
      if (float(array[j]) > average) {
        count += 1;
      }
    }
    printf("%.3f%%\n", count / N * 100);
  }
  return 0;
}