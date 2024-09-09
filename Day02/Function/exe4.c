#include <stdio.h>
int bigger (int a,int b){
    return a >b ? b : a ;

}
int main (){
    int a,b;
    printf("enter Number1: ");
    scanf("%d",&a);
    printf("enter Number2: ");
    scanf("%d",&b);
    printf("smallest number is: %d",bigger(a,b));

}