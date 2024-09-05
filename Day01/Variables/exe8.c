#include <stdio.h>
#include <math.h>
int main()
{  
    float mg;
    int a ,b ,c;
    printf("enter a and b and c: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    mg = pow((a * b * c),(0.33));
    printf("Moyenne géométrique = %f",mg);
}