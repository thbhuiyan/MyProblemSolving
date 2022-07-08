//#Write a C program to find a minimum between three numbers.
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter 3 digits: ");
    scanf("%d %d %d",&x,&y,&z);
    if(y>=x && z>=x){
        printf("%d is the minimum number!",x);
    }
    else if(x>=z && z>=y){
        printf("%d is the minimum number!",y);
    }
    else{
        printf("%d is the minimum number!",z);
    }
}
