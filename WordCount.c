#include <stdio.h>
int main()
{
    char s[1000];
    int i = 0, c = 0;

    printf("Enter a string: ");
    if (scanf("%[^\n]", s) == 1)
    {
        while (s[i] != '\0')
        {
            if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            {
                c++;
            }
            i++;
        }
        if (i > 0 && (s[i - 1] != ' ' && s[i - 1] != '\n' && s[i - 1] != '\t'))
        {
            c++;
        }

        printf("Total number of words = %d\n", c);
    }
    else
    {
        printf("No string entered.\n");
    }

    return 0;
}
