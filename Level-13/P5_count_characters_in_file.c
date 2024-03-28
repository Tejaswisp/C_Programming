/* Program to count number of characters in a file */

#include<stdio.h>
#include<stdlib.h>
#define N 50

int main()
{
    FILE *fp = NULL;
    int count = 0;
    char ch;
    fp = fopen("abc.txt","r");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    while(!(feof(fp)))
    {
        ch = fgetc(fp);
        count = count + 1;
    }
    printf("Count = %d\n",count);
    fclose(fp);
    return 0;
}