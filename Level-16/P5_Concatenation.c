/* Concatenation */

#include<stdio.h>
#define concat(m,n) m##n

int main()
{
    int ab;
    printf("Enter number: ");
    scanf("%d",&ab);
    printf("%d",concat(a,b));
    return 0;
}
