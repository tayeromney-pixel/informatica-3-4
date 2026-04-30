#include <stdio.h>

int main(void)
{
    float fahrenheit;
    float celsius;
    printf("Enter fahrenhiet: ");
    scanf("%f", &fahrenheit);


    celsius = (fahrenheit - 32) * 5 / 9;


    printf("celsius: %.0f\n", celsius);
    }
