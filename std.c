#include <stdio.h>

void main()
{
    char s[20];
    int count = 0, i;
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;  
    }
    printf("number of words in strings are: %d\n", count + 1);

}
