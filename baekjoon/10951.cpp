// https://www.acmicpc.net/problem/10951

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;

  while(scanf("%d %d", &A, &B) != EOF) {
    printf("%d\n", A + B);
  }
  return 0;
}