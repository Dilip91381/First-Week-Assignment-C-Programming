#include <stdio.h>
#include <stdlib.h>

int *marks;
int n;

// Function Declarations
void enterMarks();
void displayMarks();
void highestMarks();
void lowestMarks();
void totalMarks();
void averageMarks();

int main()
{
    int choice;

    printf("Enter number of students : ");
    scanf("%d", &n);

    marks = (int *)malloc(n * sizeof(int));

    if(marks == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 0;
    }

    do
    {
        printf("\n .... DYNAMIC ARRAY MANAGEMENT .....  \n");
        printf("\n1. Enter Marks");
        printf("\n2. Display Marks");
        printf("\n3. Highest Marks");
        printf("\n4. Lowest Marks");
        printf("\n5. Total Marks");
        printf("\n6. Average Marks");
        printf("\n7. Exit");

        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enterMarks();
                break;

            case 2:
                displayMarks();
                break;

            case 3:
                highestMarks();
                break;

            case 4:
                lowestMarks();
                break;

            case 5:
                totalMarks();
                break;

            case 6:
                averageMarks();
                break;

            case 7:
                printf("\nMemory Released Successfully.\n");
                free(marks);
                printf("Program Ended.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}

// Enter Marks
void enterMarks()
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Enter marks of Student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks Stored Successfully.\n");
}

// Display Marks
void displayMarks()
{
    int i;

    printf("\nStudent Marks\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d : %d\n", i + 1, marks[i]);
    }
}

// Highest Marks
void highestMarks()
{
    int i;
    int max = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }
    }

    printf("\nHighest Marks = %d\n", max);
}

// Lowest Marks
void lowestMarks()
{
    int i;
    int min = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] < min)
        {
            min = marks[i];
        }
    }

    printf("\nLowest Marks = %d\n", min);
}

// Total Marks
void totalMarks()
{
    int i;
    int total = 0;

    for(i = 0; i < n; i++)
    {
        total += marks[i];
    }

    printf("\nTotal Marks = %d\n", total);
}

// Average Marks
void averageMarks()
{
    int i;
    int total = 0;
    float average;

    for(i = 0; i < n; i++)
    {
        total += marks[i];
    }

    average = (float)total / n;

    printf("\nAverage Marks = %.2f\n", average);
}