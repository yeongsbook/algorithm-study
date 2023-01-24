// https://www.acmicpc.net/problem/2908

#include <stdio.h>

int main(int argc, char const *argv[]) {
  char A[4], B[4], a[4], b[4];

  scanf("%s %s", A, B);

  for (int i = 0; i < 3; i++) {
    a[i] = A[2 - i];
    b[i] = B[2 - i];
  }

  int aValue = 0;
  int bValue = 0;

  for (int i = 0; i < 3; i++) {
    int aNow = int(a[i]) - int('0');
    int bNow = int(b[i]) - int('0');

    aValue = aValue * 10 + aNow;
    bValue = bValue * 10 + bNow;
  }

  if (aValue > bValue) {
    printf("%d", aValue);
  } else {
    printf("%d", bValue);
  }

  return 0;
}