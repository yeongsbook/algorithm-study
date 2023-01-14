// https://www.acmicpc.net/problem/2884

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;

  scanf("%d %d", &A, &B);

  int minute = B - 45;
  int hour = minute < 0 ? A - 1 : A;
  if (hour < 0) {
    hour += 24;
  }
  if (minute < 0) {
    minute += 60;
  }
  printf("%d %d", hour, minute);
  return 0;
}