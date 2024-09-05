
#include <stdio.h>

int main()
{
    float kmh,ms;
    printf("enter the speed in  kilometres per hour:  ");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("the speed in metre per second: %f",ms);
    
    
    return 0;
}