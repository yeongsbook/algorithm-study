// https://www.acmicpc.net/problem/3052

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A;
  int array[42] = {0};
  int result = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &A);
    array[A % 42] += 1;
  }
  for (int i = 0; i < 42; i++) {
    if (array[i] > 0)
      result += 1;
  }
  printf("%d", result);
  return 0;
}