#include <stdio.h>
#include <string.h> // learn this why? becouse it will get rid of the space on the terminal to make it look nice.

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1]= '\0'; // learn this why? becouse it will get rid of the space on the terminal to make it look nice.
    printf("What is the price for each item? ");
    scanf("%f", &price);
    printf("How many would you like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You bought %d %s/s\n", quantity, item);

    printf("The total is: %c%.2f", currency, total);

    return 0;
}  