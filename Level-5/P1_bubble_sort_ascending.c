/*Implement bubble sort algorithm to sort an array in increasing way*/

#include<stdio.h>
#include<string.h>
#define SIZE 50

void bubble_sort_ascending(int *arr,int n);

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
    bubble_sort_ascending(arr,n);
    printf("Array after sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void bubble_sort_ascending(int *arr,int n)
{
    int i,j,temp,flag;
    for(i=0; i<n-1; i++)
    {
        flag = 0;
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }
}

