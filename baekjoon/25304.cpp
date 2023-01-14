// https://www.acmicpc.net/problem/25304

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X, N, a, b;
  int sum = 0;

  scanf("%d\n%d", &X, &N);
  for (int i = 0; i < N; i++) {
    scanf("%d\n%d", &a, &b);
    sum += a * b;
  }
  printf("%s", X == sum ? "Yes" : "No");
  return 0;
}