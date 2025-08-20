#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    int guess_no,random_no,no_of_guess=0;
    srand(time(NULL));
printf("Welcome To The Number Of Guessing\n");
random_no=rand()%100+1;
do{
    printf("You have to guessed the number between (1-100):");
    scanf("%d",&guess_no);
    no_of_guess++;
    if(guess_no>random_no){
        printf("your guess no is greater than the random number\n");
    }
    else if(guess_no<random_no){
        printf("your guess no is smaller than random number\n");
    }
    else{
        printf("Congratulations! You have sucessfully guessed the number in %d attempts\n",no_of_guess); 
    }

}while(guess_no!=random_no);
printf("\n\n");
printf("Bye!Bye!\n");
printf("Developed by Harsh Sahay");

return 0;

}