// https://www.acmicpc.net/problem/10872

#include <stdio.h>

int find(int n) {
  if (n == 0)
    return 1;
  return n * find(n - 1);
}

int main(int argc, char const *argv[]) {
  int N;

  scanf("%d", &N);

  printf("%d", find(N));
  return 0;
}