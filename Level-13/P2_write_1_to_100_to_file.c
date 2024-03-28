/* Program to write 1 to 100 into a file */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("abc.txt","w");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    for(int i=1; i<=100; i++)
    {
        fprintf(fp,"%d\n",i);
    }
    fclose(fp);
    
    return 0;
}