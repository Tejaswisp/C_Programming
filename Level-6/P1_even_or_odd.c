/*Progam to find if a number is odd or even*/

#include<stdio.h>

int even_or_odd(int num);

int main()
{
    int num,res;
    printf("Enter the number: ");
    scanf("%d",&num);
    (even_or_odd(num))?printf("%d is an even number\n",num):printf("%d is an odd number\n",num);
    return 0;
}

int even_or_odd(int num)
{
    if((num % 2) == 0)
    return 1;
    else
    return 0;
}
