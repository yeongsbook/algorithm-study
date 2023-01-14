// https://www.acmicpc.net/problem/10869

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A;
  int B;

  scanf("%d %d", &A, &B);

  printf("%d\n%d\n%d\n%d\n%d", A + B, A - B, A * B, A / B, A % B);
  return 0;
}