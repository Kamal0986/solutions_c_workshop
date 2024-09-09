#include <stdio.h>
int main (){
    char word0[100];
    char word1[100];
    printf("enter what ever you want: ");
    fgets(word0,100,stdin);
    printf("enter what ever you want: ");
    fgets(word1,100,stdin);
    int k = strlen(word0)-1;
    int l  = k + strlen(word1);
    int c = 0;
    char word [200];

    for(int i=0;i<l;i++){
        if (i<=k){
            word[i]= word0[i];
        }
        else word[i]=word1[c++];
    }
    printf("%s",word);
}