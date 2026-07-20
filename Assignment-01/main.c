#include <stdio.h>

int marks[100];
int n;

// Function declaaration
void enterMarks();
void displayMarks();
void highestMarks();
void lowestMarks();
void totalMarks();
void averageMarks();
void searchMarks();
void sortMarks();

int main()
{
    int choice;

    do
    {
        
        printf("\n   ......STUDENT MARKS ANALYZERR ......   \n");
        printf("\n1. Enter Marks");
        printf("\n2. Display Marks");
        printf("\n3. Highest Marks");
        printf("\n4. Lowest Marks");
        printf("\n5. Total Marks");
        printf("\n6. Average Marks");
        printf("\n7. Search Marks");
        printf("\n8. Sort Marks");
        printf("\n9. Exit");

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
                searchMarks();
                break;

            case 8:
                sortMarks();
                break;

            case 9:
                printf("\nProgram Ended Successfully.\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 9);

    return 0;
}

// Function to Enter Marks
void enterMarks()
{
    int i;

    printf("\nEnter number of students : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter marks of Student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks Stored Successfully.\n");
}

// Function to Display Marks
void displayMarks()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Data Available.\n");
        return;
    }

    printf("\nStudent Marks\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d : %d\n", i + 1, marks[i]);
    }
}

// Function to Find Highest Marks
void highestMarks()
{
    int i, max;

    if(n == 0)
    {
        printf("\nNo Data Available.\n");
        return;
    }

    max = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }
    }

    printf("\nHighest Marks = %d\n", max);
}

// Function to Find Lowest Marks
void lowestMarks()
{
    int i, min;

    if(n == 0)
    {
        printf("\nNo Data Available.\n");
        return;
    }

    min = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] < min)
        {
            min = marks[i];
        }
    }

    printf("\nLowest Marks = %d\n", min);
}

// Function to Calculate Total
void totalMarks()
{
    int i;
    int total = 0;

    if(n == 0)
    {
        printf("\nNo Data Available.\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    printf("\nTotal Marks = %d\n", total);
}

// Function to Calculate Average
void averageMarks()
{
    int i;
    int total = 0;
    float average;

    if(n == 0)
    {
        printf("\nNo Data Available.\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    average = (float)total / n;

    printf("\nAverage Marks = %.2f\n", average);
}

// Function to Search Marks
void searchMarks()
{
    int i, search;
    int found = 0;

    if(n == 0)
    {
        printf("\nNo Data Available.\n");
        return;
    }

    printf("\nEnter marks to search : ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(marks[i] == search)
        {
            printf("Marks found at Student %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Marks not found.\n");
    }
}

// Function to Sort Marks
void sortMarks()
{
    int i, j, temp;

    if(n == 0)
    {
        printf("\nNo Data Available.\n");
        return;
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    printf("\nMarks Sorted Successfully.\n");

    displayMarks();
}