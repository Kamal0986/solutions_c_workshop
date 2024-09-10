#include <stdio.h>
typedef struct {
    char firstName [30];
    char lastName[30];

}student;
int main (){
    int n ;
    printf("enter number of students : ");
    scanf("%d",&n);
    student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your first name: ");
        scanf("%s",s[i].firstName);
        printf("enter your last name: ");
         scanf("%s",s[i].firstName);
    }
    for (int i = 0; i < n; i++){
        printf("student %d full name: %s %s\n",i+1,s[i].firstName,s[i].lastName);
    }
}