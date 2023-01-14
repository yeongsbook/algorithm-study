// https://www.acmicpc.net/problem/1110

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, A, B;
  int now = -1;
  int length = 0;

  scanf("%d", &N);
  while (true)
  {
    if (now == N) {
      break;
    }
    if (now == -1) {
      now = N;
    }
    A = now / 10;
    B = now % 10;
    now = B * 10 + (A + B) % 10;
    length += 1;
  }
  

  printf("%d", length);
  return 0;
}