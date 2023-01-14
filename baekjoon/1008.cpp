// https://www.acmicpc.net/problem/1008

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;

  scanf("%d %d", &A, &B);

  printf("%.10lf", A / double(B));
  return 0;
}