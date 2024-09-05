
#include <stdio.h>
int multiplication(int a , int b){
    return a * b ;
}
int main()
{
    int a,b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Entre the value of B: ");
    scanf("%d",&b);
    printf("the multiplication A and B : %d",multiplication(a,b));

}