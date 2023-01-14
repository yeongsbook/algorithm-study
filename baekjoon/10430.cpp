// https://www.acmicpc.net/problem/10430

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;

  scanf("%d\n%d", &A, &B);

  int first = B / 100;
  int second = (B - first * 100) / 10;
  int third = B % 10;

  printf("%d\n%d\n%d\n%d", A * third, A * second, A * first,  A * B);
  return 0;
}