// https://www.acmicpc.net/problem/1157

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char text[1000001];
  int alphabets[26];
  int maxIndex = -1;
  int maxCount = 0;

  for (int i = 0; i < 26; i++) {
    alphabets[i] = 0;
  }

  scanf("%s", &text);

  int length = strlen(text);

  for (int i = 0; i < length; i++) {
    char c = text[i];
    int cValue = int(c);
    int index = cValue >= int('a') ? cValue - int('a') : cValue - int('A');
    alphabets[index] += 1;
    if (alphabets[index] == maxCount) {
      maxIndex = -1;
      continue;
    }
    if (alphabets[index] > maxCount) {
      maxIndex = index;
      maxCount = alphabets[index];
    }
  }

  if (maxIndex == -1) {
    printf("?");
  } else {
    printf("%c", char(maxIndex + int('A')));
  }

  return 0;
}