#include <stdio.h>
int main(){
    char letter ;
    printf("enter a letter in lowercase  : ");
    scanf("%c",&letter);
    switch (letter){
    case 'a':
        printf("it's a vowel");
        break;
     case 'e':
        printf("it's a vowel");
        break;
    case 'o':
        printf("it's a vowel");
        break;
    case 'i':
        printf("it's a vowel");
        break;
    case 'u':
        printf("it's a vowel");
        break;
    
    default:printf("it's not a vowel");
        break;
    }
    
}
