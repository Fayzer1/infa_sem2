

#include <stdio.h>

int main()
{
    int c;
    while (c != '\n')
    {
        c = getchar();
        if (c != ' ' && c != '\t')
            putchar(c);
            
    }
    return 0;

    
}