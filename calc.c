#include <stdio.h>

//1. prototype
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

//2. define
void add(void){
    float a, b;
    printf("enter first number \n");
    scanf("%f", &a);
    printf("enter second number \n");
    scanf("%f", &b);
    float result = a + b;
    printf("%.2f + %.2f  = %.2f \n", a, b, result);
}

//3. call
int main(void){
    printf("calculator \n");
    printf("1.add \n");
    printf("2.subtract \n");
    printf("3.multiply \n");
    printf("4.divide \n");
    printf ("enter your choice: ");
    int user_response;
    scanf("%d2" , &user_response);


if(user_response ==1){
    add(); }
    else if(user_response ==2){
      subtract();
    }
    else if(user_response ==3){
        multiply();
    }
    else if(user_response ==4){
        divide();
    }

    }


//2. define
void subtract(void){
    float a, b;
    printf("enter first number \n");
    scanf("%f", &a);
    printf("enter second number \n");
    scanf("%f", &b);
    float result = a - b;
    printf("%.2f - %.2f  = %.2f \n", a, b, result);
}
void multiply(void){
    float a, b;
    printf("enter first number \n");
    scanf("%f", &a);
    printf("enter second number \n");
    scanf("%f", &b);
    float result = a * b;
    printf("%.2f * %.2f  = %.2f \n", a, b, result);
}
void divide(void){
    float a, b;
    printf("enter first number \n");
    scanf("%f", &a);
    printf("enter second number \n");
    scanf("%f", &b);
    if(b == 0){
        printf("cannot be divided by zero \n");
    }
    else {
        float result = a / b;
    printf("%.2f / %.2f  = %.2f \n", a, b, result);
    }
}

