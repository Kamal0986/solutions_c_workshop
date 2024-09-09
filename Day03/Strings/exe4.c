#include <stdio.h>
int main (){
    char word0[100];
    char word1[100];
    printf("enter what ever you want: ");
    fgets(word0,1,stdin);
    printf("enter what ever you want: ");
    fgets(word1,100,stdin);
    int equal =  0 ;
   for (int i = 0; i <= strlen(word0); i++){
    if (word0[i]==word1[1])
        equal ++; 
   }
   if(equal==strlen(word0))
   printf("they are equal.");
   else printf("they are not equal.");
}