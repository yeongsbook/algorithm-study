// https://www.acmicpc.net/problem/10809

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char S[101];
  int alphabets[26];

  scanf("%s", &S);

  for (int i = 0; i < 26; i++) {
    alphabets[i] = -1;
  }
  for (int i = 0; i < strlen(S); i++)
  {
    char alphabet = S[i];
    int index = int(alphabet) - int('a');
    if (alphabets[index] == -1)
    {
      alphabets[index] = i;
    }
  }
  for (int i = 0; i < 26; i++) {
    printf("%d ", alphabets[i]);
  }
  return 0;
}