/*Implement selection sort algorithm to sort an array in increasing way*/

#include<stdio.h>
#include<string.h>
#define SIZE 50

void selection_sort_ascending(int *arr,int n);

int main()
{
    int arr[SIZE];
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort_ascending(arr,n);
    printf("Array after sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void selection_sort_ascending(int *arr,int n)
{
    int i,j,min,temp;
    for(i=0; i<n; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
            min = j;
        }
        if(i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

