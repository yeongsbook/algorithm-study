// https://www.acmicpc.net/problem/2798

#include <stdio.h>

int N, M;
int numbers[101] = {0};

int find(int n,  int sum, int index) {
  if (n == 3) {
    return sum;
  }
  int max = 0;
  int now = 0;
  for (int i = index; i < N; i++) {
    now = find(n + 1, sum + numbers[i], i + 1);
    if (now > M)
      continue;
    if (now > max) {
      max = now;
    }
  }
  return max;
}

int main(int argc, char const *argv[]) {
  scanf("%d %d", &N, &M);
  for (int i = 0; i < N; i++) {
    scanf("%d", &numbers[i]);
  }
  printf("%d", find(0, 0, 0));
  return 0;
}