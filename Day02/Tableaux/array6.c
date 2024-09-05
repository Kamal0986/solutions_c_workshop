
#include <stdio.h>
int main(){
    int number ; 
    printf("enter the factorial : ");
    int fact ;
    scanf("%d",&fact);
    printf("enter the number of the elements : ");
    scanf("%d",&number);
    int a[number];
    for (int i=0;i<number;i++){
        printf("element[%d] :  ",i+1);
        scanf("%d",&a[i]);
    }
    int max = a[0];
        for (int i=0;i<number;i++){
            printf("the result is : %d\n",a[i]*fact);
        }
}