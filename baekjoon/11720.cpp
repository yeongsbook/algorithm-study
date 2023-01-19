// https://www.acmicpc.net/problem/11720

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  char numbers[101];
  int sum = 0;

  scanf("%d", &N);
  scanf("%s", &numbers);

  for (int i = 0; i < N; i++) {
    int number = int(numbers[i]);
    sum += number - int('0');
  }

  printf("%d", sum);
  return 0;
}