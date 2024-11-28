#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void askUser(){
  int x,y;
 printf("Enter the Fisrt Number :");
    scanf("%i",x);
    printf("Enter the Second Number :");
    scanf("%i",y);
    //printf("%i",sum(num1,num2));
}

int sum(int x,int y) {
  return x+y;
}
int sub(int x,int y) {
  return x-y;
}
int mult(int x,int y) {
  return x*y;
}
int divding(int x,int y) {
  return x/y;
}
int mod(int x,int y) {
  return x%y;
}

int main() {
  char op;
  int num1,num2;


  printf("\t\t******* Simple Calculator V1 **********\n\n");
  printf("What the Operation Want to do (+ - * / % : )\n");
  //printf("1:+\t2:-\t3:*\t4:/\t5:%");
  scanf("%c",&op);

  switch(op) {
  case '+'
    /*
    printf("Enter the Fisrt Number :");
    scanf("%i",&num1);
    printf("Enter the Second Number :");
    scanf("%i",&num2);
    printf("%i",sum(num1,num2));
    */
    askUser(1,1);
   // printf("%i",sum(num1,num2));
    break;
  case '-':
    printf("Enter the Fisrt Number :");
    scanf("%i",&num1);
    printf("Enter the Second Number :");
    scanf("%i",&num2);
    printf("%i",sub(num1,num2));

    break;
  case '*':
    printf("Enter the Fisrt Number :");
    scanf("%i",&num1);
    printf("Enter the Second Number :");
    scanf("%i",&num2);
    printf("%i",divding(num1,num2));
    break;
  case '/':
    printf("Enter the Fisrt Number :");
    scanf("%i",&num1);
    printf("Enter the Second Number :");
    scanf("%i",&num2);
    printf("%i",mult(num1,num2));
    break;
  case '%':
    printf("Enter the Fisrt Number :");
    scanf("%i",&num1);
    printf("Enter the Second Number :");
    scanf("%i",&num2);
    printf("%i",mod(num1,num2));
    break;
  default:
    printf("Respect Operation..");
    break;
  }





  return 0;
}
