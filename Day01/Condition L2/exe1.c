//Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.
#include <stdio.h>
int main(){
    int number ;
    printf("enter a number : ");
    scanf("%d",&number);
    if (number%2==0)
        printf("ce nombre est pair");
    else printf("ce nombre est impair");
    
}
