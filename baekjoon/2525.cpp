// https://www.acmicpc.net/problem/2525

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B, C;

  scanf("%d %d\n%d", &A, &B, &C);

  int minute = B + C;
  int hour = A + minute / 60;
  if (hour >= 24) {
    hour -= 24;
  }
  printf("%d %d", hour, minute % 60);
  return 0;
}