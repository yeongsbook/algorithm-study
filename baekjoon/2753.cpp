// https://www.acmicpc.net/problem/2753

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A;

  scanf("%d", &A);

  printf("%d", bool(A % 4 == 0 && (A % 100 != 0 || A % 400 == 0)));
  return 0;
}