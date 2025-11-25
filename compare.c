#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Whats X?");
    int y = get_int("whats y?");

    if (x < y){
        printf("Hello X is less than Y \n");
        return 0;
    }
    else if (x > y){
        printf("Hello X is greater than y \n");
        return 0;
    }
    else {
        printf("X is equal to Y\n");
        return 0;
    }
}