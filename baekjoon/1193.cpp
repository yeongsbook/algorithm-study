// https://www.acmicpc.net/problem/1193

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X;
  int max = 1;
  bool left = false;

  scanf("%d", &X);

  while(X > max) {
    X -= max;
    left = !left;
    max += 1;
  }

  if (left) {
    printf("%d/%d", X, max + 1 - X);
  } else {
    printf("%d/%d", max + 1 - X, X);
  }
  return 0;
}