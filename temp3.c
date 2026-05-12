#include <stdio.h>
//1.prototype
void c_to_f(void);
void f_to_c(void);

//.3 call
int main(void){
    printf("temperature converter \n");
    printf("1.Celsius to Fahrenheit \n");
    printf("2.Fahrenheit to Celsius \n");
    printf("Enter your option: ");
    int user_response
    scanf("%d2" , &user_response);{
    }

if(user_response ==1){
    c_to_f();
 } else if (user_response ==2){
        f_to_c();
 }else {
    printf("invalid option \n");
 }
}

//.2 define
void c_to_f(void){
    float c;
    printf("enter the temperature in celsius: ");
    scanf("%f", &c);
    float f = (c*1.8) + 32;
    printf("%.2f°C = %.2f°F \n", c, f);

}

    void f_to_c(void);
    float f;
    printf("enter the temperature in farenheit: ");
    scanf("%f", &f);
    float c = (f-32) / 1.8;
    printf("%.2f°C = %.2f°F \n", f, c);
}

