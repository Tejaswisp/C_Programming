/* Program to write an array of strings to a file */

#include<stdio.h>
#include<stdlib.h>
#define N 20

int main()
{
    FILE *fp = NULL;
    char str[N][N];
    int n,i;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    printf("Enter strings: \n");
    for(i=0; i<n; i++)
    {
       scanf("%s",str[i]);
       //fgets(str[i],N,stdin);
    }
    fp = fopen("abc.txt","w");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        fputs(str[i],fp);
        fputc('\n',fp);
    }
    fclose(fp);

    return 0;
}