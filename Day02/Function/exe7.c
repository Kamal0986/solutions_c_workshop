#include <stdio.h>
#include <string.h>
void inversee(char word[]){
    int k =  strlen(word)-1;
    for (int i=0 ;i<strlen(word)/2;i++){
        char temp = word[i];

        word[i]=word[k];
        word[k] = temp;
        k--;
    }
}

int main(){
    char word[20];
    scanf("%s",word);
    inversee(word);
    printf("%s",word);
}