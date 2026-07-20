#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    float price;
    int quantity;
};

struct Product product[100];
int n = 0;

// Function Declarations
void addProduct();
void displayProducts();
void searchProduct();
void updateProduct();
void sortProducts();
void totalValue();

int main()
{
    int choice;

    do
    {
        printf("\n  .... INVENTORY MANAGEMENT SYSTEM  .... \n");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Product");
        printf("\n5. Sort by Price");
        printf("\n6. Total Inventory Value");
        printf("\n7. Exit");

        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                sortProducts();
                break;

            case 6:
                totalValue();
                break;

            case 7:
                printf("\nProgram Ended Successfully.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    }while(choice!=7);

    return 0;
}

// Add Product
void addProduct()
{
    printf("\nEnter Product ID : ");
    scanf("%d",&product[n].id);

    getchar();

    printf("Enter Product Name : ");
    fgets(product[n].name,50,stdin);
    product[n].name[strcspn(product[n].name,"\n")] = '\0';

    printf("Enter Price : ");
    scanf("%f",&product[n].price);

    printf("Enter Quantity : ");
    scanf("%d",&product[n].quantity);

    n++;

    printf("\nProduct Added Successfully.\n");
}

// Display Products
void displayProducts()
{
    int i;

    if(n==0)
    {
        printf("\nNo Product Available.\n");
        return;
    }

    printf("\nProduct Details\n");

    for(i=0;i<n;i++)
    {
        printf("\n-----------------------------");
        printf("\nProduct ID : %d",product[i].id);
        printf("\nName       : %s",product[i].name);
        printf("\nPrice      : %.2f",product[i].price);
        printf("\nQuantity   : %d\n",product[i].quantity);
    }
}

// Search Product
void searchProduct()
{
    int id,i;

    if(n==0)
    {
        printf("\nNo Product Available.\n");
        return;
    }

    printf("\nEnter Product ID : ");
    scanf("%d",&id);

    for(i=0;i<n;i++)
    {
        if(product[i].id==id)
        {
            printf("\nProduct Found");
            printf("\nName : %s",product[i].name);
            printf("\nPrice : %.2f",product[i].price);
            printf("\nQuantity : %d\n",product[i].quantity);
            return;
        }
    }

    printf("\nProduct Not Found.\n");
}

// Update Product
void updateProduct()
{
    int id,i;

    if(n==0)
    {
        printf("\nNo Product Available.\n");
        return;
    }

    printf("\nEnter Product ID : ");
    scanf("%d",&id);

    for(i=0;i<n;i++)
    {
        if(product[i].id==id)
        {
            getchar();

            printf("Enter New Product Name : ");
            fgets(product[i].name,50,stdin);
            product[i].name[strcspn(product[i].name,"\n")] = '\0';

            printf("Enter New Price : ");
            scanf("%f",&product[i].price);

            printf("Enter New Quantity : ");
            scanf("%d",&product[i].quantity);

            printf("\nProduct Updated Successfully.\n");
            return;
        }
    }

    printf("\nProduct Not Found.\n");
}

// Sort Products by Price
void sortProducts()
{
    int i,j;
    struct Product temp;

    if(n==0)
    {
        printf("\nNo Product Available.\n");
        return;
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(product[j].price > product[j+1].price)
            {
                temp = product[j];
                product[j] = product[j+1];
                product[j+1] = temp;
            }
        }
    }

    printf("\nProducts Sorted by Price Successfully.\n");
}

// Total Inventory Value
void totalValue()
{
    int i;
    float total = 0;

    if(n==0)
    {
        printf("\nNo Product Available.\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        total += product[i].price * product[i].quantity;
    }

    printf("\nTotal Inventory Value = %.2f\n",total);
}