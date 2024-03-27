/* typedef int (*fptr)(int, int); fptr fp; */

#include <stdio.h>

typedef int (*fptr) (int,int);
int add_fun(int a,int b);

int main()
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    fptr fp;
    fp = add_fun;
    int res = fp(a,b);
    printf("sum of two numbers = %d\n",res);

    return 0;
}

int add_fun(int a,int b)
{
    return a+b;
}
