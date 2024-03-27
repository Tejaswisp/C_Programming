/* Structure syntax */

#include<stdio.h>

struct s 
{
    int a;
    char ch;
};

int main()
{
    struct s s1 = {10,'a'};
    printf("Structure :\n");
    printf("Data = %d\n",s1.a);
    printf("Character = %c\n",s1.ch);
    
    return 0;
}
