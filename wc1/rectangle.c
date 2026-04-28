#include <stdio.h>

int main(void)
{
float length, width;
float area, perimeter;

printf("Enter length: ");
scanf("%f", &length);

printf("Enter area: ");
scanf("%f", &width);

area = length * width;
perimeter = 2 * (length + width);

printf("Area: %.0f\n", area);
printf("Perimeter: %.0f\n", perimeter);

}
