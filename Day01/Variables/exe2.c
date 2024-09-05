  
#include <stdio.h>

int main()
{
    float c;
    printf("entrer la la température en Celsius: ");
    scanf("%f",&c);
    if(c<0)
    printf("la température est Solide");
    else if(0<=c && c<100)
     printf("la température est Liquide");
    else printf("la température est  Gaz");
    
    return 0;
}