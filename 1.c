//1. Write a C program to find the maximum between two numbers.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter 2 digits: ");
    scanf("%d %d",&x,&y);

    if(x>y){
        printf("%d is greater than %d !",x,y);
    }
    else if(y>x){
        printf("%d is greater than %d !",y,x);
    }
    else{
        printf("Sorry!! %d and %d is equal number!",x,y);
    }
}
