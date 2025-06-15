#include <stdio.h>
#include <string.h>

int main( ){
    char item[30] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Which item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    printf("What is the price for the item? ");
    scanf("%f", &price);
    printf("How many items would you like to buy? ");
    scanf("%d", &quantity);
    total = quantity * price;
    printf("You bought %d %s/s\n", quantity, item);
    printf("Your total is %c%.2f",currency, total );
    return 0;
}

/* Looking good coded by myself but I need to learn to use 

#include <string.h>
fgets(item, sizeof(item), stdin);
item[strlen(item) - 1] = '\0';

*/