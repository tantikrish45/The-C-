#include <stdio.h>
#include <string.h>

void main()
{
    char str[200];

    printf("Enter any string : ");
    scanf("%[^\n]", &str);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        int freq = 1;

        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                freq++;
                str[j] = '\0';
            }
        }

        if (str[i] != '\0')
        {
            printf("%c => %d\n", str[i], freq);
        }
    }
}