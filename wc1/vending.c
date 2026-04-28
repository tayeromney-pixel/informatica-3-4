#include <stdio.h>

int main(void)
{
    //This is the code w euse forprintf to find values needed
    //product 1 symphony chocolate xl
    float price1 = 2.97;
    int quantity1 = 67;
    char select1 = 'A';

//product 2 chick fil a meal #9 the cool wrap
float price2 = 12.19;
int quantity2 = 67;
char select2 = 'B';

//product 3 swig buttery beer
float price3 = 3.44;
int quantity3 = 67;
char select3 = 'C';
//code for terminal to show my code
printf("Vending Machine Stock\n");
printf("----------------------\n");

printf("Item name: symphony chocolate xl\n");
printf("Price: $%.2f\n", price1); //%.2f formats number to 2 decimal places
printf("Quantity avalible: %d\n", quantity1); //used for whole numbers
printf("Selection code: %c\n\n", select1); //%c used for single character like number or letter

printf("Item name: chick fil a meal #9 the cool wrap\n");
printf("Price: $%.2f\n", price2);
printf("Quantity avalible: %d\n", quantity2);
printf("Selection code: %c\n\n", select2);

printf("Item name: swig buttery beer\n");
printf("Price: $%.2f\n", price3);
printf("Quantity avalible: %d\n", quantity3);
printf("Selection code: %c\n\n", select3);
}
