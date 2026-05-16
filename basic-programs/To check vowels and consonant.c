#include <stdio.h>

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert uppercase to lowercase (optional)
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("It is a Vowel\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("It is a Consonant\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}
