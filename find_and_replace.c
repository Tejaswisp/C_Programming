/*Search and replace letter ‘a’ in a string with letter ‘k’*/

#include<stdio.h>
#include<string.h>
#define N 50

void find_and_replace(char *str,int n);

int main()
{
    char str[N];
    printf("Enter the string: ");
    fgets(str,N,stdin);
    find_and_replace(str,strlen(str));
    printf("String after replacing letter 'a with 'k' is : %s\n",str);
    return 0;
}

void find_and_replace(char *str,int n)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'a')
        {
            str[i] = str[i] + 10;
        }
        i++;
    }
}