#include <stdio.h>
int main(void){
    int a = 5;//equal sign means assignment
    int b = 5;
    int c = 10;

    printf("%d == %d is %d \n", a, b, a==b);//equal sign means comparison
    printf("%d!=%d is %d \n", a, c, a != c);// != means not equal
//create a program to check if a number is negative
int number;
printf("Enter a number: ");
scanf("%d", &number);//user enters the number/integer and we store if in number

if (number < 0) {
    printf("%d is a negative number.\n",number);// seperate things w the brackets only if its true wihtin the brackets
} else{   printf("%d is a postive number.\n",number);
}
}
