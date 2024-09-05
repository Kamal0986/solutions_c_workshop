

#include <stdio.h>

int main()
{
    int a [5];
    for (int i = 0;i<5;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0;i<5;i++){
        for (int j=0;j<5;j++)
            if(a[i]<a[i+1]){
                int temp;
            temp = a[i];
            a[i]= a[i+1];
            a[i+1]= temp;
    }
    }
    for(int i =0; i<5; i++){
        printf("a[%d] = %d\n",i+1,a[i]);
    }
    
}