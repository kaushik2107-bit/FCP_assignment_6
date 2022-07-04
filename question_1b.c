#include <stdio.h>

int main() {
    int i, check=0;
    char string1[100];
    char string2[100];
    printf("Enter string1: \n");
    scanf("%[^\n]%*c", string1);
    printf("Enter string2: \n");
    scanf("%[^\n]%*c", string2);


    for (i=0; string1[i]!='\0' && string2[i]!='\0'; ++i) {
        if (string1[i] == string2[i]) {
            check = 1;
        } else {
            check = 0;
            break;
        }
        if (string1[i+1]=='\0' && string2[i+1]=='\0') check = 1;
        else check = 0;
    }

    if (check) printf("Same\n");
    else printf("Not Same\n");

}
