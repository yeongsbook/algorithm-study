// https://www.acmicpc.net/problem/2231

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N;
  int minSum = 999999999;
  int result = 0;

  scanf("%d", &N);
  for (int i = 1; i < N; i++) {
    int now = i;
    int sum = now;
    while(now > 10) {
      sum += now % 10;
      now /= 10;
    }
    sum += now;
    if (sum == N && (sum < minSum)) {
      minSum = sum;
      result = i;
    }
  }
  printf("%d", result);
  return 0;
}