#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Store {
    char name[20];
    float price;
};

int main() {

    char product[50], platform[20];
    float price;
    int i, best = 0;

    struct Store s[5] = {
        {"Amazon", 0},
        {"Flipkart", 0},
        {"Myntra", 0},
        {"Ajio", 0},
        {"Reliance", 0}
    };

    srand(time(NULL));

    printf("====================================\n");
    printf("         PRICEWISE SYSTEM\n");
    printf("====================================\n");

    printf("Enter Product Name: ");
    fgets(product, sizeof(product), stdin);

    product[strcspn(product, "\n")] = '\0';

    printf("\nAvailable Platforms:\n");
    printf("Amazon\nFlipkart\nMyntra\nAjio\nReliance\n");

    printf("\nEnter Platform: ");
    scanf("%s", platform);

    printf("Enter Price: ");
    scanf("%f", &price);

    for(i = 0; i < 5; i++) {

        if(strcmp(platform, s[i].name) == 0)
            s[i].price = price;

        else
            s[i].price = price + (rand() % 2001 - 1000);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].price < s[best].price)
            best = i;
    }

    printf("\n====================================\n");
    printf("        PRICE COMPARISON\n");
    printf("====================================\n");

    printf("Product : %s\n\n", product);

    for(i = 0; i < 5; i++) {
        printf("%-10s : Rs. %.0f\n",
               s[i].name,
               s[i].price);
    }

    printf("\n------------------------------------\n");
    printf("Recommended Deal : %s\n", s[best].name);

    if(strcmp(platform, s[best].name) == 0) {

        printf("Best deal already available on\n");
        printf("your selected platform.\n");

    } else {

        printf("You Save : Rs. %.0f\n",
               price - s[best].price);
    }

    printf("------------------------------------\n");

    return 0;
}