#include <stdio.h>

int main() {
    int i,j;
    char string[100];
    printf("Enter a string :\n");
    scanf("%[^\n]%*c", string);

    for (i=0; string[i]!='\0'; ++i) {
        for (j=i+1; string[j]!='\0'; ++j) {
            if (string[i] > string[j]) {
                char tmp = string[i];
                string[i] = string[j];
                string[j] = tmp;
            }
        }
    }

    printf("%s", string);
}
