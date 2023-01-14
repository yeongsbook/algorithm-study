// https://www.acmicpc.net/problem/8393

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A;

  scanf("%d", &A);

  printf("%d", A * (A + 1) / 2);
  return 0;
}