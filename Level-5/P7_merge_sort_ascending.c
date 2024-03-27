/* Mergw sort*/
#include <stdio.h>
#define N 50

void merge(int *arr,int lb,int mid,int ub);
void merge_sort(int *arr,int lb,int ub);

int main()
{
    int arr[N],i,n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d values:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    merge_sort(arr,0,n-1);
    printf("Array after sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void merge_sort(int *arr,int lb,int ub)
{
    if(lb < ub)
    {
        int mid = (lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

void merge(int *arr,int lb,int mid,int ub)
{
    int i,j,k;
    i = lb;
    j = mid+1;
    k = lb;
    int b[N] = {0};
    while(i<=mid && j<=ub)
    {
        if(arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j <= ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i <= mid)
        {
            b[k] = arr[i];
            k++;
            i++;
        }
    }
    for(i=lb; i<=ub; i++)
    {
        arr[i] = b[i];
    }
}
