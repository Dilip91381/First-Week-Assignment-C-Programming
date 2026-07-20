#include <stdio.h>

char str[100];

// Function Declarations
void inputString();
void stringLength();
void reverseString();
void palindrome();
void countCharacters();
void characterFrequency();

int main()
{
    int choice;

    do
    {
        printf("\n  ....  STRING UTILITY TOOLKIT ....     \n");
        printf("\n1. Enter String");
        printf("\n2. Find String Length");
        printf("\n3. Reverse String");
        printf("\n4. Check Palindrome");
        printf("\n5. Count Vowels, Digits and Spaces");
        printf("\n6. Character Frequency");
        printf("\n7. Exit");

        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                inputString();
                break;

            case 2:
                stringLength();
                break;

            case 3:
                reverseString();
                break;

            case 4:
                palindrome();
                break;

            case 5:
                countCharacters();
                break;

            case 6:
                characterFrequency();
                break;

            case 7:
                printf("\nProgram Ended Successfully.\n");
                break;

            default:
                printf("\nInvalid Choice! Try Again.\n");
        }

    } while(choice != 7);

    return 0;
}

// Input String
void inputString()
{
    printf("\nEnter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("\nString Saved Successfully.\n");
}

// Find Length
void stringLength()
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    if(i > 0 && str[i - 1] == '\n')
    {
        i--;
    }

    printf("\nLength of String = %d\n", i);
}

// Reverse String
void reverseString()
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    if(i > 0 && str[i - 1] == '\n')
    {
        i--;
    }

    printf("\nReverse String : ");

    for(i = i - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

// Check Palindrome
void palindrome()
{
    int i = 0, j;

    while(str[i] != '\0')
    {
        i++;
    }

    if(i > 0 && str[i - 1] == '\n')
    {
        i--;
    }

    j = i - 1;

    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            printf("\nNot a Palindrome.\n");
            return;
        }
    }

    printf("\nPalindrome String.\n");
}

// Count Vowels, Digits and Spaces
void countCharacters()
{
    int i = 0;
    int vowels = 0;
    int digits = 0;
    int spaces = 0;

    while(str[i] != '\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else if(str[i]==' ')
        {
            spaces++;
        }

        i++;
    }

    printf("\nVowels : %d", vowels);
    printf("\nDigits : %d", digits);
    printf("\nSpaces : %d\n", spaces);
}

// Character Frequency
void characterFrequency()
{
    int i, j, count;

    printf("\nCharacter Frequency\n");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
        {
            continue;
        }

        count = 1;

        if(str[i] == '*')
        {
            continue;
        }

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '*';
            }
        }

        printf("%c = %d\n", str[i], count);
    }
}