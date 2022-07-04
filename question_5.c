#include <stdio.h>
#include <string.h>

int main() {
  int i, j, a, b, count = 0, check = 0;
  char string1[100];
  char string2[100];

  printf("Enter a string1 :\n");
  scanf("%[^\n]%*c", string1);
  printf("Enter a string2 to find :\n");
  scanf("%[^\n]%*c", string2);

  a = strlen(string1);
  b = strlen(string2);

  // printf("%d %d", a, b);
  for (i=0; i<=a-b; ++i) {
    if (string1[i] == string2[0]) {
      for (j=0; j<b-1; ++j) {
        if (string1[j+i+1] != string2[j+1]) {
          check = 0;
          break;
        } else {
          check = 1;
        }
      }
    }

    if (check) count++;
    check = 0;
  }

  printf("%d",count);
}
