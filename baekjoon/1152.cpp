// https://www.acmicpc.net/problem/1152

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char text[1000005];
  int result = 1;

  scanf("%[^\n]s", text);

  int length = strlen(text);
  if (length == 1 && text[0] == ' ') {
    printf("0");
    return 0;
  }
  for (int i = 0; i < length; i += 1) {
    if (text[i] == ' ' && (i > 0 && i < length - 1)) {
      result += 1;
    }
  }

  printf("%d", result);
  return 0;
}