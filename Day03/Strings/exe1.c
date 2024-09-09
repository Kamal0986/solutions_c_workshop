#include <stdio.h>
int main (){
    char word[100];
    printf("enter what ever you want: ");
    fgets(word,100,stdin);
    printf("%s",word);

}