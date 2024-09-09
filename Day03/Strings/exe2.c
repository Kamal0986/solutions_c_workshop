#include <stdio.h>
int main(){
    char word[100];
    printf("enter what ever you want: ");
    fgets(word,100,stdin);
    int lenstr = 0;
    while(lenstr<100){
        if(word[lenstr]=='\0'){
            break ; 
        }
            lenstr++;
    }
    printf("length of %s  :  %d",word,lenstr);
}