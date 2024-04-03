/*Implement insertion sort algorithm to sort an array in decreasing way*/

#include<stdio.h>
#include<string.h>
#define SIZE 50

void insertion_sort_descending(int *arr,int n);

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
    insertion_sort_descending(arr,n);
    printf("Array after sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void insertion_sort_descending(int *arr,int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        j = i-1;
        temp = arr[i];
        while((arr[j] < temp) && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

