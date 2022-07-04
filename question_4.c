#include <stdio.h>

int main() {
    int i,j;
    char string1[100];
    char string2[100];
    char string3[100];
    printf("Enter a string1 :\n");
    scanf("%[^\n]%*c", string1);
    printf("Enter a string2 :\n");
    scanf("%[^\n]%*c", string2);

    for (i=0; string1[i]!='\0'; ++i) {
      string3[i] = string1[i];
      if (string1[i+1] == '\0') {
        string3[i+1] = ' ';
        for (j=0; string2[j]!='\0'; ++j) {
          string3[j+i+2] = string2[j];
          if (string2[j+1] == '\0') {
            string3[j+i+3] = '\0';
          }
        }
      }
    }

    printf("%s", string3);

}
