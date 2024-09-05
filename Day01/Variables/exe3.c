
#include <stdio.h>

int main() {
    float km,yards;
    printf("what is the distance in km: ");
    scanf("%f",&km);
    yards = km * 1093.61;
    printf("the distance in yards: %f",yards);
    return 0;
}