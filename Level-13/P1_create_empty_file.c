/* Program to create an empty file */

#include <stdio.h>

int main()
{
   FILE *fp;
   fp = fopen("abc.txt","r");
   if(fp == NULL)
   printf("Unable to open a file\n");
   else
   printf("Successfully created file\n");
   fclose(fp);
   return 0;
}
