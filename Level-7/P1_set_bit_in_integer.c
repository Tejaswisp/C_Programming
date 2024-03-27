/* Program to set a bit at a particular position in an integer */

#include <stdio.h>

int set_bit(int num,int k);

int main()
{
    int num,k,res;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the position: ");
    scanf("%d",&k);
    res = set_bit(num,k);
    printf("After setting the bit : %d\n",res);
    return 0;
}

int set_bit(int num,int k)
{
    num = (num | (1 << k));
    return num;
}

