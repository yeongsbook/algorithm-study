// https://www.acmicpc.net/problem/10807

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, v;
  int array[101];
  int result = 0;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }
  scanf("%d", &v);
  for (int i = 0; i < N; i++) {
    if (array[i] == v) {
      result += 1;
    }
  }
  printf("%d", result);
  return 0;
}