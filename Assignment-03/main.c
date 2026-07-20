#include <stdio.h>

// Function Declarations
void displayAddress();
void dereferencePointer();
void swapNumbers();
void arrayTraversal();
void pointerArithmetic();

int main()
{
    int choice;

    do
    {
        printf("\n    .....  POINTER PLAYGROUND  .....    \n");
        printf("\n1. Display Memory Address");
        printf("\n2. Dereference Pointer");
        printf("\n3. Swap Two Numbers");
        printf("\n4. Traverse Array Using Pointer");
        printf("\n5. Pointer Arithmetic");
        printf("\n6. Exit");

        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                displayAddress();
                break;

            case 2:
                dereferencePointer();
                break;

            case 3:
                swapNumbers();
                break;

            case 4:
                arrayTraversal();
                break;

            case 5:
                pointerArithmetic();
                break;

            case 6:
                printf("\nProgram Ended Successfully.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    }while(choice!=6);

    return 0;
}

// Display Memory Address
void displayAddress()
{
    int num;
    int *ptr;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    ptr=&num;

    printf("\nValue = %d",num);
    printf("\nMemory Address = %p\n",&num);
}

// Dereference Pointer
void dereferencePointer()
{
    int num;
    int *ptr;

    printf("\nEnter a number : ");
    scanf("%d",&num);

    ptr=&num;

    printf("\nPointer Address = %p",ptr);
    printf("\nValue using Pointer = %d\n",*ptr);
}

// Swap Using Pointer
void swapNumbers()
{
    int a,b,temp;
    int *p1,*p2;

    printf("\nEnter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    p1=&a;
    p2=&b;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("\nAfter Swapping");
    printf("\nFirst Number = %d",a);
    printf("\nSecond Number = %d\n",b);
}

// Array Traversal
void arrayTraversal()
{
    int arr[5];
    int *ptr;
    int i;

    printf("\nEnter 5 Elements\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    ptr=arr;

    printf("\nArray Elements\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }

    printf("\n");
}

// Pointer Arithmetic
void pointerArithmetic()
{
    int arr[5]={10,20,30,40,50};
    int *ptr;
    int i;

    ptr=arr;

    printf("\nPointer Arithmetic\n");

    for(i=0;i<5;i++)
    {
        printf("Address = %p  Value = %d\n",ptr+i,*(ptr+i));
    }
}