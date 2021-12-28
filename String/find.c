#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, vowel, consonent, digit, word, other;

    printf("Enter: ");
    gets(str);

    i = vowel = consonent = digit = word = other = 0;

    while ((ch = str[i]) != '\0')
    {

        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            vowel++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonent++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch >= ' ')
        {
            word++;
        }
        else
        {
            other++;
        }

        i++;
    }
    word++;

    printf("Vowel: %d\n", vowel);
    printf("Consonent: %d\n", consonent);
    printf("Digit: %d\n", digit);
    printf("Word: %d\n", word);
    printf("Other: %d\n", other);

    return 0;
}