// Online C compiler to run C program online
#include <stdio.h>
int bigger(int a , int b){
    return a>b ? a : b ;
}
int main()
{
    int a,b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Entre the value of B: ");
    scanf("%d",&b);
    printf("the Bigest number is :  %d",bigger(a,b));

}