// https://www.acmicpc.net/problem/1316

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int N;
  char text[101];
  int result = 0;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%s", text);
    int length = strlen(text);
    int alphabets[26] = {0};
    char lastChar = ' ';
    bool check = false;

    for (int j = 0; j < length; j++) {
      char c = text[j];
      int index = int(c) - int('a');
      if (lastChar != c && alphabets[index] == 0) {
        alphabets[index]++;
        lastChar = c;
        continue;
      }
      if (alphabets[index] > 0) {
        if (lastChar == c) {
          alphabets[index]++;
        } else {
          alphabets[index] = -1;
        }
      }
      lastChar = c;
    }
    for (int j = 0; j < 26; j++) {
      if (alphabets[j] == -1) {
        check = true;
        break;
      }
    }
    if (check == false) {
      result += 1;
    }
  }
  printf("%d", result);
  return 0;
}