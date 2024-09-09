#include <stdio.h>
int check (int n ){
    if(n%2==0){
        return 1;
    }
    else return 0;
}
int main (){
    int number; 
    printf("enter your number: ");
    scanf("%d",&number);
    if(check(number)== 1)
      printf("print it's pair.");
    else printf("it's impaire.");
    
}