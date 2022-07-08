#include <stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    double sp,area;
    printf("Enter the three values of x,y and z : ");
    scanf("%d %d %d",&x,&y,&z);
    sp=(double)(x+y+z)/2;
    area= sqrt(sp*(sp-x)*(sp-y)*(sp-z));
    printf("\nThe area is : %.3f",area);
    return 0;
}
