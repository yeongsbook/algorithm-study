// https://www.acmicpc.net/problem/11653

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  int now = 2;

  scanf("%d", &N);

  while(N > 1) {
    if (N % now == 0) {
      printf("%d\n", now);
      N /= now;
      continue;
    }
    now++;
  }
  return 0;
}