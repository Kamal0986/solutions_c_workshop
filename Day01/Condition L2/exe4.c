#include <stdio.h>
int main (){
    int year ,Mois,Jours ,Heures , Minutes , Secondes;
    printf("Insert year number : ");
    scanf("%d",&year);
    Mois = year*12;
    Jours = Mois*30;
    Heures = Jours*60;
    Minutes = Heures*60;
    Secondes = Minutes*60;
    printf("%-10s : %-20d \n","Mois",Mois);
    printf("%-10s : %-20d \n","Jours",Jours);
    printf("%-10s : %-20d \n","Heures",Heures);
    printf("%-10s : %-20d \n","Minutes",Minutes);
    getchar();
    return 0 ;
}