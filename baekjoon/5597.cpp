// https://www.acmicpc.net/problem/5597

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A;
  int array[31] = {0};

  for (int i = 0; i < 28; i++) {
    scanf("%d", &A);
    array[A] = 1;
  }
  for (int i = 1; i < 31; i++) {
    if (array[i] == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}