/*Implement Linear searching algorithm*/

#include <stdio.h>
#define SIZE 50

int linear_serach(int *arr,int item,int n);

int main()
{
    int arr[SIZE];
    int n,i,item,res;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d",&item);
    res = linear_serach(arr,item,n);
    if(res == -1)
    printf("%d is not found in the array\n",item);
    else
    printf("%d is found at index %d\n",item,res);
    return 0;
}

int linear_serach(int *arr,int item,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(item == arr[i])
        return i;
    }
    if(i == n)
    return -1;
}
