#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a Sentence: ");  
    fgets(str, sizeof(str), stdin);
    if (strstr(str, "//"),(strstr(str, "/*") && strstr(str, "*/"))) 
    {
        printf("The given string is a comment\n");
    } 
    else 
    {
        printf("The given string is not a comment\n");
    }
    return 0;
}