/* Program to learn use of string.h API, strlen - calculate the length of a string */

#include<stdio.h>
#include<string.h>
#define SIZE 100 

int main() 
{
    char str[SIZE];
    printf("Enter the string : ");
    fgets(str,SIZE,stdin);
    int length = strlen(str)-1;
    printf("The length string is : %d\n",length);
    return 0;
}

