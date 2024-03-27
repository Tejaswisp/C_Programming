/* Function-like Macros*/

#include<stdio.h>
#define MAX(a,b) (((a) > (b))?(a):(b))

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Max of %d and %d is : %d\n",a,b,MAX(a,b));
    return 0;
}
