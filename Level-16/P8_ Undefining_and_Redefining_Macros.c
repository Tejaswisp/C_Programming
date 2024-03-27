/* Undefining and Redefining Macros */

#include<stdio.h>
#define FIVE 5
#undef FIVE
#define FIVE 10 

int main()
{
    printf("%d\n",FIVE);
    
    return 0;
}
