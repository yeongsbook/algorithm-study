// https://www.acmicpc.net/problem/1330

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;

  scanf("%d %d", &A, &B);

  if (A < B) {
    printf("<");
  } else if (A > B) {
    printf(">");
  } else {
    printf("==");
  }
  return 0;
}