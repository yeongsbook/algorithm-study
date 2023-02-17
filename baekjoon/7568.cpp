// https://www.acmicpc.net/problem/7568

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, x, y;
  int array[51][2] = {0};

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d %d", &array[i][0], &array[i][1]);
  }

  for (int i = 0; i < N; i++)
  {
    int rank = 1;
    for (int j = 0; j < N; j++)
    {
      if (i == j) {
        continue;
      }
      if (array[j][0] > array[i][0] && array[j][1] > array[i][1]) {
        rank++;
      }
    }
    printf("%d ", rank);
  }
  return 0;
}