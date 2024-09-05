#include <stdio.h>
int main()
{
    int   a,b,c;
    printf("enter the value of a and b and c : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float sum = (a*2)+(b*3)+(c*5);
    printf("la moyenne est : %f",sum/10);
    
    return 0;
}