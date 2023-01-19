// https://www.acmicpc.net/problem/4673

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int array[10001] = {0};
  for (int i = 0; i < 10001; i++) {
    int sum = i;
    int now = i;
    while (now != 0)
    {
      int value = now % 10;
      sum += value;
      now = (now - value) / 10;
    }
    if (sum > 10000) {
      continue;
    }
    array[sum] += 1;
  }
  for (int i = 0; i < 10001; i++) {
    if (array[i] == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}