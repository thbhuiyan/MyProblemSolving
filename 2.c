//2. Write a C program to find a minimum between three numbers.
#include<stdio.h>
int main()
{
    int i=0;
    while(i!=5)
    {
        int x,y,z;
        printf("\n\nEnter 3 digits: ");
        scanf("%d %d %d",&x,&y,&z);
        if(y>=x && z>=x)
        {
            printf("%d is the minimum number!",x);
        }
        else if(x>=y && z>=y)
        {
            printf("%d is the minimum number!",y);
        }
        else
        {
            printf("%d is the minimum number!",z);
        }
        i++;
    }
}

