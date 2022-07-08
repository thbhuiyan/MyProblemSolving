//6. Write a C program to find the third maximum between four numbers.
#include<stdio.h>
int main()
{
    int arr[4],i,temp,j;
    printf("Enter 4 digits: ");
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting: ");
    for(i=0; i<4; i++)
    {
        printf("%d ",arr[i]);
    }
    for(j=0; j<4; j++)
    {
        for(i=0; i<4; i++)
        {
            if(arr[i]<arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("\nAfter sorting: ");
    for(i=0; i<4; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n%d is the 3rd most maximum in the 4 numbers! ",arr[2]);
}
