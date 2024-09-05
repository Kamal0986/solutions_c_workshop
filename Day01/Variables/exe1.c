
#include <stdio.h>

int main() {
    int fname [15];
    int lname [15];
    int age ;
    char sexe;
    char email [100];
    printf("enter your first name: ");
    scanf("%s",fname);
    printf("enter last name: ");
    scanf("%s",lname);
    printf("enter your age: ");
    scanf("%d",&age);
    printf("enter your sexe: [M/F]");
    scanf(" %c",&sexe);
    printf("enter your email: ");
    scanf("%s",email);
    
    
    printf("################\n"); 
    printf("first name : %s\n",fname);
    printf("last name: %s\n",lname);
    printf("age: %d",age);
    printf("sexe: %c\n",sexe);
    printf("email: %s",email);
    
    
    
    return 0;
}