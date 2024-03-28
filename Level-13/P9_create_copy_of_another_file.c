/* Program to create a file which is a copy of another file */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = NULL,*fp1=NULL;
    char ch;
    int count = 0;
    fp = fopen("abc.txt","r");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fp1 = fopen("x1.txt","w");
    if(fp1 == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    for(ch = fgetc(fp); ch != EOF; ch = fgetc(fp))
    {
        fputc(ch,fp1);
    }
    fclose(fp1);
    fclose(fp);
    return 0;
}