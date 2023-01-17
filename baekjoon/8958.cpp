// https://www.acmicpc.net/problem/8958

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int N;
  char text[80];

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%s", &text);
    int sum = 0;
    int dScore = 0;
    int length = strlen(text);
    for (int j = 0; j < length; j++) {
      char c = text[j];
      if (c == 'O') {
        dScore += 1;
        sum += dScore;
        continue;
      }
      dScore = 0;
    }
    printf("%d\n", sum);
  }
  return 0;
}