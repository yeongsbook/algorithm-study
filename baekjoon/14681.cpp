// https://www.acmicpc.net/problem/14681

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;

  scanf("%d\n%d", &A, &B);

  if (A > 0 && B > 0) {
    printf("1");
  } else if (A < 0 && B > 0) {
    printf("2");
  } else if (A < 0 && B < 0) {
    printf("3");
  } else {
    printf("4");
  }
  return 0;
}