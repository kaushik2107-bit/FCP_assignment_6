#include <stdio.h>

int main() {
  int i, j;
  char tmp[100];
  scanf("%[^\n]%*c", tmp);

  char find[100];
  scanf("%[^\n]%*c", find);

  char repl[100];
  scanf("%[^\n]%*c", repl);

  char at[100];

  a = strlen(tmp);
  b = strlen(find);
  c = strlen(repl);

  for (i=0; i<=a-b; ++i) {
    if (tmp[i] == find[0]) {
      for (j=0; j<b-1; ++j) {
        if (tmp[j+i+1] != find[j+1]) {
          check = 0;
          break;
        } else {
          check = 1;
        }
      }
    }

    

  }
}
