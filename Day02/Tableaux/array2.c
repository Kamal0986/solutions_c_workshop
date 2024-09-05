
#include <stdio.h>
int main(){
    int number ; 
    printf("enter the number of the elements : ");
    scanf("%d",&number);
    int a[number];
    for (int i=0;i<number;i++){
        printf("element[%d] :  ",i+1);
        scanf("%d",&a[i]);
    }
        for (int i=0;i<number;i++){
        printf("element[%d] = %d\n",i,a[i]);
        }
}