#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

struct Student student[100];
int n = 0;

// Function Declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    do
    {
        printf("\n ....  STUDENT MANAGEMENT SYSTEM  .....  \n");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
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

// Add Student
void addStudent()
{
    printf("\nEnter Roll Number : ");
    scanf("%d",&student[n].rollNo);

    getchar();

    printf("Enter Name : ");
    fgets(student[n].name,50,stdin);

    printf("Enter Marks : ");
    scanf("%f",&student[n].marks);

    n++;

    printf("\nStudent Added Successfully.\n");
}

// Display Students
void displayStudents()
{
    int i;

    if(n==0)
    {
        printf("\nNo Student Record Found.\n");
        return;
    }

    printf("\nStudent Records\n");

    for(i=0;i<n;i++)
    {
        printf("\n--------------------------");
        printf("\nRoll No : %d",student[i].rollNo);
        printf("\nName : %s",student[i].name);
        printf("Marks : %.2f\n",student[i].marks);
    }
}

// Search Student
void searchStudent()
{
    int roll,i;

    if(n==0)
    {
        printf("\nNo Student Record Found.\n");
        return;
    }

    printf("\nEnter Roll Number : ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(student[i].rollNo==roll)
        {
            printf("\nStudent Found");
            printf("\nName : %s",student[i].name);
            printf("Marks : %.2f\n",student[i].marks);
            return;
        }
    }

    printf("\nStudent Not Found.\n");
}

// Update Student
void updateStudent()
{
    int roll,i;

    if(n==0)
    {
        printf("\nNo Student Record Found.\n");
        return;
    }

    printf("\nEnter Roll Number : ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(student[i].rollNo==roll)
        {
            getchar();

            printf("Enter New Name : ");
            fgets(student[i].name,50,stdin);

            printf("Enter New Marks : ");
            scanf("%f",&student[i].marks);

            printf("\nRecord Updated Successfully.\n");
            return;
        }
    }

    printf("\nStudent Not Found.\n");
}

// Delete Student
void deleteStudent()
{
    int roll,i,j;

    if(n==0)
    {
        printf("\nNo Student Record Found.\n");
        return;
    }

    printf("\nEnter Roll Number : ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(student[i].rollNo==roll)
        {
            for(j=i;j<n-1;j++)
            {
                student[j]=student[j+1];
            }

            n--;

            printf("\nRecord Deleted Successfully.\n");
            return;
        }
    }

    printf("\nStudent Not Found.\n");
}