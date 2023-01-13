// https://www.acmicpc.net/problem/3003

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A;
  int list[6];
  list[0] = 1;
  list[1] = 1;
  list[2] = 2;
  list[3] = 2;
  list[4] = 2;
  list[5] = 8;

  for (int i = 0; i < 6; i++) {
    scanf("%d", &A);
    printf("%d ", list[i] - A);
  }
  return 0;
}