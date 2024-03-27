/* Implement custom definition of API, strlen - calculate the length of a string */

#include<stdio.h>
#define SIZE 100 

int string_length(char *str);

int main() 
{
    char str[SIZE];
    int length;
    printf("Enter the string: ");
    fgets(str,SIZE,stdin);
    length = string_length(str);
    printf("The length of the string is : %d\n",length);
    return 0;
}

int string_length(char *str)
{
    int len = 0;
    while(*str != '\n')
    {
        len++;
        str++;
    }
    return len;
}
