// https://www.acmicpc.net/problem/10870

#include <stdio.h>

int find(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return find(n - 1) + find(n - 2);
}

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  printf("%d", find(N));
  return 0;
}