/*Implement binary searching algorithm*/

#include <stdio.h>
#define SIZE 50

int binary_serach(int *arr,int item,int n);

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
    res = binary_serach(arr,item,n);
    if(res == -1)
    printf("%d is not found in the array\n",item);
    else
    printf("%d is found at index %d\n",item,res);
    return 0;
}

int binary_serach(int *arr,int item,int n)
{
    int lb,ub,mid;
    lb = 0;
    ub = n-1;
    while(lb < ub)
    {
        mid = ((lb+ub)/2);
        if(arr[mid] == item)
        return mid;
        else if(item < arr[mid])
        ub = mid-1;
        else
        lb = mid+1;
    }
    return -1;
}
