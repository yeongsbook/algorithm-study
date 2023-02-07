// https://www.acmicpc.net/problem/2475

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A;
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &A);
    sum += A * A;
  }

  printf("%d", sum % 10);
  return 0;
}