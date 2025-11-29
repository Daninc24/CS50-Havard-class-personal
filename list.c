#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;

    //time passes need more memory

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    tmp[3] = 40;

    free(list);
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", list[i]);
    }
}