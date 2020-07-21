#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[80];

int main()
{
    int len, i;
    printf("아아아아ㅏ아앙: \n");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
        {
            printf(".-");
        }
        if (str[i] == 'B' || str[i] == 'b')
        {
            printf("-...");
        }
        if (str[i] == 'C' || str[i] == 'c')
        {
            printf("-.-.");
        }
        if (str[i] == 'D' || str[i] == 'd')
        {
            printf("-..");
        }
        if (str[i] == 'E' || str[i] == 'e')
        {
            printf(".");
        }
        if (str[i] == 'F' || str[i] == 'f')
        {
            printf("..-.");
        }
        if (str[i] == 'G' || str[i] == 'g')
        {
            printf("--.");
        }
        if (str[i] == 'H' || str[i] == 'h')
        {
            printf("....");
        }
        if (str[i] == 'I' || str[i] == 'i')
        {
            printf("..");
        }
        if (str[i] == 'J' || str[i] == 'j')
        {
            printf(".---");
        }
        if (str[i] == 'K' || str[i] == 'k')
        {
            printf("-.-");
        }
        if (str[i] == 'L' || str[i] == 'l')
        {
            printf(".-..");
        }
        if (str[i] == 'M' || str[i] == 'm')
        {
            printf("--");
        }
        if (str[i] == 'N' || str[i] == 'n')
        {
            printf("-.");
        }
        if (str[i] == 'O' || str[i] == 'o')
        {
            printf("---");
        }
        if (str[i] == 'P' || str[i] == 'p')
        {
            printf(".--.");
        }
        if (str[i] == 'Q' || str[i] == 'q')
        {
            printf("--.-");
        }
        if (str[i] == 'R' || str[i] == 'r')
        {
            printf(".-.");
        }
        if (str[i] == 'S' || str[i] == 's')
        {
            printf("...");
        }
        if (str[i] == 'T' || str[i] == 't')
        {
            printf("-");
        }
        if (str[i] == 'U' || str[i] == 'u')
        {
            printf("..-");
        }
        if (str[i] == 'V' || str[i] == 'v')
        {
            printf("...-");
        }
        if (str[i] == 'W' || str[i] == 'w')
        {
            printf(".--");
        }
        if (str[i] == 'X' || str[i] == 'x')
        {
            printf("-..-");
        }
        if (str[i] == 'Y' || str[i] == 'y')
        {
            printf("-.--");
        }
        if (str[i] == 'Z' || str[i] == 'z')
        {
            printf("--..");
        }
        if (str[i] == '1')
        {
            printf(".----");
        }
        if (str[i] == '2')
        {
            printf("..---");
        }
        if (str[i] == '3')
        {
            printf("...--");
        }
        if (str[i] == '4')
        {
            printf("....-");
        }
        if (str[i] == '5')
        {
            printf(".....");
        }
        if (str[i] == '6')
        {
            printf("-....");
        }
        if (str[i] == '7')
        {
            printf("--...");
        }
        if (str[i] == '8')
        {
            printf("---..");
        }
        if (str[i] == '9')
        {
            printf("----.");
        }
        if (str[i] == '0')
        {
            printf("-----");
        }
        if (str[i] == '-')
        {
            printf("-....-");
        }
        if (str[i] == '.')
        {
            printf(".-.-.-");
        }
        if (str[i] == ',')
        {
            printf("--..--");
        }
        if (str[i] == '(')
        {
            printf("-.--.");
        }
        if (str[i] == ')')
        {
            printf("-.--.-");
        }
        if (str[i] == '?')
        {
            printf("..--..");
        }
        if (str[i] == '\/')
        {
            printf("-..-.");
        }
    }
    printf("\n");
    return 0;
}
