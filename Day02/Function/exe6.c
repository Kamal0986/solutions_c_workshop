#include <stdio.h>
#include <string.h>
#define max 100
int count = 0  ;

typedef struct {
	char Title [50];
	char Auteur [50];
	float prix ;
	int Quantity ;
} Library;
Library book [max];
void Library_Menu() {

	printf("|%-10s %-50s %-1s|\n","","\033[0;31m 1-Add a book to stock.","");
	printf("|%-10s %-50s %-1s|\n","","\033[0;31m 2-View all available books.","");
	printf("|%-10s %-50s %-1s|\n","","\033[0;31m 3-Search for a book by title.","");
	printf("|%-10s %-50s %-1s|\n","","\033[0;31m 4-Update the quantity of a book.","");
	printf("|%-10s %-50s %-1s|\n","","\033[0;31m 5-Remove a book from stock.","");
	printf("|%-10s %-50s %-1s|\n","","\033[0;31m 6-View the total number of books in stock.","");
	printf("|%-10s %-50s %-1s|\n","","\033[0;31m 7-Exit\033[0;31m\n","");
}
void Add_project () {
	int ask ;
	do {
        char book_name [50];
        printf("Enter your name : ");
        fgets(book_name,50,stdin);
        if(count<0){
            for (int i = 0 ; i<count ; i++){
                
                




            }
        }
		getchar();

		printf("enter the Auteur: ");
		fgets(book[count].Auteur,50,stdin);
		printf("enter the price:  ");
		scanf("%f",&book[count].prix);
		printf("enter the Quantity: ");
		scanf("%d",&book[count].Quantity);
		printf("do you wanna add another one: [1-Y/2-N] ");
		scanf("%d",&ask);
		count++;
	} while( ask!=2);
}
void display () {
	printf("Books List :\n");
	if (count == 0)
	printf("\033[44mempty List.\033[0m\n");
	else{
	for (int i = 0; i < count; i++) {
		printf("Title      :   %s\n",book[i].Title);
		printf("Auteur     :   %s\n",book[i].Auteur);
        printf("Prix       :   %f\n",book[i].prix);
        printf("Quantity   :   %d\n",book[i].Quantity);
        



	}
	}
}
void change_Qtty() {
	char book_name[50];
	int new_Quantity ;
	printf ("enter the book name:");
	getchar();
	fgets(book_name,50,stdin);
	for(int i=0; i<count; i++) {
		if(strcmp(book[i].Title, book_name)==0) {
			printf("enter the new Quantity: ");
			scanf("%d",&new_Quantity);
			book[i].Quantity = new_Quantity ;
		}

	}

}
void delet () {
	char book_name[50];
	printf("Delete option.\n");
		if(count==0){
		printf("\033[44mThere is Nothing to Delete.\033[0m\n");
	}
	else{
	getchar();
	if(count>0)
	printf("enter the book name: ");
	fgets(book_name,50,stdin);
	for(int i=0; i<count; i++) {
		if(strcmp(book[i].Title, book_name)==0) {
			book[i] = book[i+1];
			count--;
		}

	}
	}

}
void search_by_title() {
	char book_name [50];
	printf("enter the name of the book you're searching For :");
	getchar();
	fgets(book_name,50,stdin);
	int check  = 0;
	for(int i = 0; i<count ; i++) {
		if(strcasecmp(book[i].Title,book_name)==0) {
			printf("Title     :   %s\n",book[i].Title);
			printf("Auteur    :   %s\n",book[i].Auteur);
			printf("Prix      :   %f\n",book[i].prix);
			printf("Quantity  :   %d\n",book[i].Quantity);
			check = 1;
		}

	}
	if(check == 0) {
		printf("\033[44m%s Not Found.\033[0m\n",book_name);
	}
}
void Total_Books() {
	int total = 0;
	for(int i = 0  ; i < count ; i++)
		total  += book[i].Quantity;
	if (total == 0 )
		printf("empty Quantity");
	else
		printf("\033[44mThe Total number in STOCK is : %d\033[0m\n",total);
}
void check (){
    for (int i= 0 ; i<count-1; i++ ){
        for (int j = 1; j< count ; j++){
            if(book[i].Auteur==book[j].Auteur)
                book[i] = book[i+1];
                printf("\033[44m%sThis book is already exist.\033[0m\n",book[i].Title);



        }


    }





}
int main() {
	int choice ;
	printf("|%-10s %-50s %-1s|\n","","WELCOM TO LIBRARY :","");
	Library_Menu();
	printf("enter your choice: ");
	scanf("%d",&choice);
	while(choice!=7) {
		switch(choice) {
		case 1 :
			Add_project();
            check();
			break;
		case 2 :
			display();
			break;
		case 3 :
			search_by_title();
			break;
		case 4 :
			change_Qtty();
			break;
		case 5:
			delet();
			break;
		case 6 :
			Total_Books() ;
			break ;
		default :
			printf("Choice Not Found. \n");

		}
		Library_Menu();
		printf("enter your choice: ");
		scanf("%d",&choice);
	}




}