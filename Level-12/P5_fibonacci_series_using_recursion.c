/* 	Program to print fibonacci series using recursion */

#include<stdio.h>

void print_fibonacci(int n1,int n2,int n);

int main()
{
    int n1,n2,n;
    printf("Enter n value: ");
    scanf("%d",&n);
    n1 = 0;
    n2 = 1;
    printf("fibonacii series:\n");
    printf("%d %d ",n1,n2);
    print_fibonacci(n1,n2,n-2);
    return 0;
}

void print_fibonacci(int n1,int n2,int n)
{
    if(n > 0)
    {
        int n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
        print_fibonacci(n1,n2,--n);
    }
}
