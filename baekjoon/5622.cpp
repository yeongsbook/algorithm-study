// https://www.acmicpc.net/problem/5622

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char text[16];
  int values[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
  int result = 0;

  scanf("%s", text);

  int length = strlen(text);

  for (int i = 0; i < length; i++) {
    int index = int(text[i]) - int('A');
    result += values[index];
  }

  printf("%d", result);

  return 0;
}