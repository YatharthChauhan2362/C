#include <stdio.h>
#include <string.h>
#define pencil_cost 5
#define pen_cost 10
#define erasor_cost 3
#define notebook_cost 50

struct customer
{
    char c_id[50], c_name[50], c_payment[20];
    int qty, bill;
};

int main()
{
    int i, k = 0;
    char choice[3], c_id_search[50];

    struct customer c[i];

    for (i = 0; i < 4; i++)
    {

        int n;

        printf("Enter The Customer ID: ");
        scanf("%s", c[i].c_id);

        printf("Enter The Customer Name: ");
        scanf("%s", c[i].c_name);

        do
        {
            printf("\nEnter 1 for Purchasing Pencil (Rs. 5)");
            printf("\nEnter 2 for Purchasing Pen (Rs. 10)");
            printf("\nEnter 3 for Purchasing Erasor (Rs. 3)");
            printf("\nEnter 4 for Purchasing Notebook (Rs. 50)");

            printf("\nEnter The Number To What You Want To Buy Item: ");
            scanf("%d", &n);

            switch (n)
            {
            case 1:

                printf("\nEnter The Quantity: ");
                scanf("%d", &c[i].qty);

                c[i].bill = c[i].bill + c[i].qty * pencil_cost;
                break;

            case 2:

                printf("\nEnter The Quantity: ");
                scanf("%d", &c[i].qty);

                c[i].bill = c[i].bill + c[i].qty * pen_cost;
                break;

            case 3:

                printf("\nEnter The Quantity: ");
                scanf("%d", &c[i].qty);

                c[i].bill = c[i].bill + c[i].qty * erasor_cost;
                break;

            case 4:

                printf("\nEnter The Quantity: ");
                scanf("%d", &c[i].qty);

                c[i].bill = c[i].bill + c[i].qty * notebook_cost;

                break;

            default:

                printf("Please Enter Valid Number");
                break;
            }

            printf("\nDo you want to purchase more? ");
            scanf("%s", choice);

        } while (k == strcmp(choice, "yes"));

        printf("payment Method: ");
        scanf("%s", c[i].c_payment);
    }

    do
    {

        printf("\nEnter The Customer ID Do You Want To Search: ");
        scanf("%s", c_id_search);

        for (i = 0; i < 4; i++)
        {
            if (k == strcmp(c_id_search, c[i].c_id))
            {
                printf("Customer ID: %s", c[i].c_id);
                printf("\nCustomer Name: %s", c[i].c_name);
                printf("\nPayment Method: %s", c[i].c_payment);
                printf("\nCustomer Bill: %d", c[i].bill);
            }
        }

        printf("\nDo You Want To Search More Customer Detail?: ");
        scanf("%s", choice);

    } while (k == strcmp(choice, "yes"));
}