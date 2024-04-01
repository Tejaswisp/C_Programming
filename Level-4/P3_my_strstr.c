/* 3.	Implement my_strstr similar to strstr */


#include<stdio.h>
#include<string.h>
#define N 50 

void my_strstr(char *str,char *subs);

int main()
{
    char str[N],subs[N];
    printf("Enter source string : ");
    fgets(str,N,stdin);
    printf("Enter string to be searched: ");
    fgets(subs,N,stdin);
    
    my_strstr(str,subs);

    return 0;
}

void my_strstr(char *str,char *subs)
{
    int i,j=0,flag = 0,len1,len2;
    char *ptr = NULL;
    len1 = (strlen(str)-1);
    for(i=0; i< len1; i++)
    {
        if(str[i] == subs[j])
        {
            while(subs[j] != '\0' && subs[j] != '\n')
            {
                if(str[i+j] != subs[j])
                {
                    flag = 1;
                    break;
                }
                j++;
            }
            if(flag == 0)
            ptr = (str+i);
        }
    }
    if(flag == 1)
    printf("String not found\n");
    else
    printf("%s\n",ptr);
}
