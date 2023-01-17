// https://www.acmicpc.net/problem/1546

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  int array[1001];
  int max = 1;
  float sum = 0;

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
    if (array[i] > max) {
      max = array[i];
    }
  }
  for (int i = 0; i < N; i++) {
    sum += float(array[i]) / max * 100;
  }
  
  printf("%f", sum / N);
  return 0;
}