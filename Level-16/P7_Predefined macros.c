/* Predefined macros */

#include<stdio.h>

int main()
{
    printf("Line number : %d\n",__LINE__);
    printf("file name: %s\n",__FILE__);
    printf("Date : %s\n",__DATE__);
    printf("Time : %s\n",__TIME__); 
    
    return 0;
}
