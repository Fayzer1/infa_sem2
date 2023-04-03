// program for copy 

#include <stdio.h>

int main()
{
    int count;
    int prev_char;
    int next_char;

    prev_char = getchar();
    while(prev_char != '\n')
    {
        next_char = getchar();
        if (prev_char == next_char)
            count++;
        else 
        {   
            if (count >= 2)
            {
                while (count >= 0)
                {
                    printf("%c", prev_char);
                    count--;
                }
                putchar('\n');
            }
            count = 0;
        }    
        prev_char = next_char;
    }   
}
