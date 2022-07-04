#include <stdio.h>

int main() {
    int i, sum = 0;
    char string[100];
    printf("Enter a string :\n");
    scanf("%[^\n]%*c", string);

    for (i=0; string[i]!='\0'; ++i) {
        sum += (int)string[i];
    }

    printf("%d", sum);

    return 0;
}
