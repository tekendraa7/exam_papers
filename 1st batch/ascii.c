// Write a program to print the ASCII values of vowels in a string without using library functions

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            printf("Character: %c, ASCII: %d\n", str[i], str[i]);
        }
        i++;
    }
    return 0;
}
