#include <stdio.h>

int main() {
    int i,j, check=0;
    char string1[100];
    char string2[100];
    printf("Enter string1: \n");
    scanf("%[^\n]%*c", string1);
    printf("Enter string2: \n");
    scanf("%[^\n]%*c", string2);

    for (i=0; string1[i]!='\0'; ++i) ;

    for (j=0; string2[j]!='\0'; ++j) {
            string1[j+i] = string2[j];
            if (string2[j+1]=='\0') string1[j+1+i] = '\0';
        }
    printf("%s", string1);
}
