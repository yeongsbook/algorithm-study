// https://www.acmicpc.net/problem/1065

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  int result = N < 100 ? N : 99;
  for (int i = 100; i < 1000; i++) {
    if (i > N) {
      break;
    }
    int now = i;
    int first = now % 10;
    int second = ((now - first) / 10) % 10;
    int third = now / 100;
    if (third - second == second - first) {
      result += 1;
    }
  }
  printf("%d", result);
  return 0;
}