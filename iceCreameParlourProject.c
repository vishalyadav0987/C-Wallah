#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaximumFlavour 100

struct IceCream
{
    char name[50];
    float price;
    int quantity;
};

struct IceCream flavors[MaximumFlavour];
int numberOfflavours = 0;

// Add new iceCrwame
void add_flavor()
{
    if (numberOfflavours == MaximumFlavour)
    {
        printf("Maximum number of flavors reached.\n");
        return;
    }

    struct IceCream newFlavours;

    printf("Enter the name of the new flavor: ");
    scanf("%s", newFlavours.name);

    printf("Enter the price of the new flavor: ");
    scanf("%f", &newFlavours.price);

    printf("Enter the quantity of the new flavor: ");
    scanf("%d", &newFlavours.quantity);

    flavors[numberOfflavours] = newFlavours;
    numberOfflavours++;

    printf("New flavor added successfully.\n");
}

// Avaliable iceCreame
void display_flavors()
{
    if (numberOfflavours == 0)
    {
        printf("No flavors available.\n");
        return;
    }

    printf("Available flavors:\n");

    for (int i = 0; i < numberOfflavours; i++)
    {
        printf("%d. %s ($%.2f) - Quantity: %d\n", i + 1, flavors[i].name, flavors[i].price, flavors[i].quantity);
    }
}

// CalculateSales
float total_sales()
{
    float total = 0;

    for (int i = 0; i < numberOfflavours; i++)
    {
        total += flavors[i].price * flavors[i].quantity;
    }

    return total;
}

void deletionFun(int pos)
{
    int i;
    for (i = pos - 1; i < numberOfflavours; i++)
    {
        flavors[i] = flavors[i + 1];
    }
    //  for(i=0;i numberOfflavours-1;i++){
    //     printf("%d\t",flavors[i]);
    //  }
}

int main()
{
    int selectOne;
    int position;

    do
    {
        printf("\nIce-cream Parlor Management System\n");
        printf("1. Add new flavor\n");
        printf("2. Display available flavors\n");
        printf("3. Calculate total sales\n");
        printf("4. Exit\n");
        printf("5. Delete ice creame\n");
        printf("Enter your selectOne: ");
        scanf("%d", &selectOne);

        switch (selectOne)
        {
        case 1:
            add_flavor();
            break;
        case 2:
            display_flavors();

            break;
        case 3:
            printf("Total sales: $%.2f\n", total_sales());
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
            break;
        case 5:
            printf("Enter the positiontion where you wants delete : ");
            scanf("%d", &position);
            deletionFun(position);
            printf("Successfully deleted\n");
            break;
        default:
            printf("Invalid selection.\n");
            break;
        }
    } while (selectOne != 4);

    return 0;
}