#include <stdio.h>
int fibonnaci(int n){
    int i = 0;
    int a,b,c;
    a = -1;
    b = 1;
    while(i<=n){
        c = a+b;
        a = b;
        b = c;
        i++;
    }
    return c ;
}
int main(){
    int number ;
    printf("enter a number: ");
    scanf("%d",&number);
    printf("number in fibonacci serrie: %d",fibonnaci(number));
}