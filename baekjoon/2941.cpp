// https://www.acmicpc.net/problem/2941

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char text[101];
  char cAlphabets[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
  int alphabetsCount[26] = {0};
  int cAlphabetsCount[8] = {0};
  int result = 0;
  int jump = 0;

  scanf("%s", text);

  int length = strlen(text);

  for (int i = 0; i < length; i++) {
    if (jump > 0) {
      jump -= 1;
      continue;
    }
    for (int j = 0; j < 8; j++) {
      if (j == 2) {
        if (length < 3 || i >= length - 2) {
          continue;
        }
        if (text[i] == 'd' && text[i + 1] == 'z' && text[i + 2] == '=') {
          jump += 2;
          cAlphabetsCount[j]++;
          break;
        }
      } else {
        if (length < 2 || i >= length - 1) {
          continue;
        }
          if (text[i] == cAlphabets[j][0] && text[i + 1] == cAlphabets[j][1]) {
          jump += 1;
          cAlphabetsCount[j]++;
          break;
        }
      }
    }
    if (jump > 0) {
      continue;
    }
    int index = int(text[i]) - int('a');
    alphabetsCount[index]++;
  }

  for (int i = 0; i < 8; i++) {
    result += cAlphabetsCount[i];
  }

  for (int i = 0; i < 26; i++) {
    result += alphabetsCount[i];
  }

  printf("%d", result);
  return 0;
}