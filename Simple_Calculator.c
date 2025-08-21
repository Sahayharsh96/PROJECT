#include<stdio.h>
#include<math.h>
double divide(double,double);
double remainder(double,double);




void print_menu(){
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Divide\n");
printf("4.Multiplication\n");
printf("5.Remainder\n");
printf("6.Power\n");
printf("7.Exit\n");

return;
}
double divide(double first_no,double second_no){
if(second_no==0){
    fprintf(stderr,"INVALID ARGUMENT FOR DIVISION\n");
    return NAN;
}    
else{
    return first_no/second_no;
}
}


double remainder(double a,double b){
if(b==0){
    fprintf(stderr,"INVALID ARGUMENT FOR MODULUS\n");
    return NAN;
}    
else{
    return (int)a%(int)b;
}
}

int main(){
    int choice;
    double first_no,second_no,result;
while(1){
    printf("\n\n--------------------\n");
printf("\nWelcome to the Simple Calculator\n");
print_menu();
printf("Now,enter your choice:");
scanf("%d",&choice);

 if(choice==7){  
     break;
 }
 if(choice<1||choice>7){
    fprintf(stderr,"INVALID CHOICE\n");
    continue;
 }
  printf("Please,Enter First Number:");
 scanf("%lf",&first_no);
 printf(" Now,Enter Second Number:");
 scanf("%lf",&second_no);

switch(choice){

case 1: //Addition
        result=first_no+second_no;
        break;
case 2: //Subtraction
        result=first_no-second_no;
        break;
case 3: //Divide
        result=divide(first_no,second_no);
        break;
case 4: //Multiplication
        result=first_no*second_no;
        break;
case 5: //Remainder
        result=remainder(first_no,second_no);
        break;
case 6: //Power
        result=pow(first_no,second_no);
        break;

                                                        
}

if(!isnan(result)){
printf("Result of operation is: %.4f\n",result);
}

}
return 0;
}
