#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string: \n");
    fgets(str, sizeof(str), stdin);

    int whitespaceCount = 0;
    int newlineCount = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            whitespaceCount++;
        } else if (str[i] == '\n') {
            newlineCount++;
        }
    }

    printf("Number of whitespace characters: %d\n", whitespaceCount);
    printf("Number of newline characters: %d\n", newlineCount);

}

