/*Program 23:Develop a C program to read the attributes of an item from the user such as
ItemCode, ItemName, Quantity and Rate. Implement a C program using a
structure to find the total cost of the inventory of storing N items in the stock.
Name- ADITYA BHARDWAJ
Section- F1
Roll No- 06
Course – B TECH
Branch – CSE
*/

#include <stdio.h>
#include <string.h>

struct Item
{
    char ItemCode[20];
    char ItemName[50];
    int Quantity;
    float Rate;
};

int main()
{
    int n;
    float totalInventoryCost = 0;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    getchar();

    struct Item items[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Item %d\n", i + 1);

        printf("Item Code: ");
        fgets(items[i].ItemCode, sizeof(items[i].ItemCode), stdin);
        items[i].ItemCode[strcspn(items[i].ItemCode, "\n")] = '\0';

        printf("Item Name: ");
        fgets(items[i].ItemName, sizeof(items[i].ItemName), stdin);
        items[i].ItemName[strcspn(items[i].ItemName, "\n")] = '\0';

        printf("Quantity: ");
        scanf("%d", &items[i].Quantity);

        printf("Rate: ");
        scanf("%f", &items[i].Rate);

        getchar();
    }

    printf("\n%-10s %-20s %-10s %-10s %-10s\n", "Code", "Name", "Qty", "Rate", "Total");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        float total = items[i].Quantity * items[i].Rate;
        totalInventoryCost += total;
        printf("%-10s %-20s %-10d %-10.2f %-10.2f\n",
               items[i].ItemCode, items[i].ItemName, items[i].Quantity, items[i].Rate, total);
    }

    printf("\nTotal Inventory Cost: ₹%.2f\n", totalInventoryCost);

    return 0;
}
/*OUTPUT
Enter the number of items: 3

Enter details for Item 1
Item Code: 1
Item Name: BISCUIT
Quantity: 5
Rate: 25

Enter details for Item 2
Item Code: 2
Item Name: KALA HIT
Quantity: 1
Rate: 150

Enter details for Item 3
Item Code: 3
Item Name: CHOCOLATE
Quantity: 7
Rate: 70

Code       Name                 Qty        Rate       Total
---------------------------------------------------------------
1          BISCUIT              5          25.00      125.00
2          KALA HIT             1          150.00     150.00
3          CHOCOLATE            7          70.00      490.00

Total Inventory Cost: Γé╣765.00


*/
