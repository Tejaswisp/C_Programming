/* 	Program to write a string to a file */

#include<stdio.h>
#include<stdlib.h>
#define N 50

int main()
{
    FILE *fp = NULL;
    char str[N];
    printf("Enter string: ");
    fgets(str,N,stdin);
    fp = fopen("abc.txt","w");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fputs(str,fp);
    fclose(fp);
    return 0;
}