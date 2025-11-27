#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("s: ");
    if (s == NULL)
    {
        return 1; // Exit if memory allocation failed
    }
    if (t == NULL)
    {
        free(s); // Free previously allocated memory
        return 1; // Exit if memory allocation failed
    }

    strcpy(t, s); // Copy contents of s to t

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
   

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    free(t); // Free allocated memory for t

    return 0;
}