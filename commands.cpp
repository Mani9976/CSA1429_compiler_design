#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the line of string \n");
    gets(str);
    int n=strlen(str);
    if(str[1]=='/'&&str[0]=='/')
	{
        printf("Given line is a single line comment");
    }
    else if(str[0]=='/'&&str[1]=='*'&&str[n-1]=='/'&&str[n-2]=='*')
	{
        printf("Given line is  multiple line comment");
    }
    else{
        printf("Given line is not comment\n");}
	
}
