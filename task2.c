
#include <stdio.h>

int main()
{
    int c;
    int count;
    while (c != '\n')
    {
        c = getchar();

        if ((c == ' ' || c == '\t') && count < 1)
        {
            putchar('\n');
            ++count;
        }

        if (c != ' ' && c != '\t')
        {   
            putchar(c);
            count = 0;
        }
    }
    return 0;

    
}