//loop1
#include <stdio.h>
int main(){
    printf("enter a number : ");
    int random ;
    scanf("%d",&random);
    int i = 0;
    while (i<=10){
        printf("%d * %d = %d\n",random , i ,random *i    );
        i++;
    }
    
}