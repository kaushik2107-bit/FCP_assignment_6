#include <stdio.h>

int main() {
    int i,j;
    char string1[100];
    char string2[100];
    printf("Enter a string :\n");
    scanf("%[^\n]%*c", string1);

    for (j=0 ;  string1[j] != '\0'; ++j);

    for (i=0 ;  string1[i] != '\0'; ++i) {
        string2[i] = string1[j-1-i];
    }

    string2[i]='\0';
    printf("%s", string2);

    return 0;
}
