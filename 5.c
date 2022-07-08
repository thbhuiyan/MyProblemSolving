//5. Given two numbers N and X. Find N is divisible by X or not.
#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    if(n%x==0)
    {
        printf("%d is divisible by %d",n,x);
    }
    else
        printf("%d is not divisible by %d",n,x);
}
