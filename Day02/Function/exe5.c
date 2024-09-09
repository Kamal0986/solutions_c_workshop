int Fuctorial(int F){
    int fact = 1;
    for (int i = 1; i <= F; i++)
    {
        fact *= i;
    }
    return fact;

}

int main(){
    printf("enter a number : ");
    int Fact ;
    scanf("%d",&Fact);  
    printf("The Factorial of number %d is: %d",Fact , Fuctorial(Fact));


}