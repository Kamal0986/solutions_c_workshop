#include <stdio.h>
typedef struct{
    char first_name [50];
    char last_name [50];
    int age ;
}Personne;
int main(){
    Personne p1={"Younes","kamal",20};
    printf("Name : %s\n",p1.first_name);
    printf("Name : %s\n",p1.last_name);
    printf("Name : %d\n",p1.age);
}