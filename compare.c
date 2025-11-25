#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Whats X?");
    int y = get_int("whats y?");

    if (x < y){
        printf("Hello X is less than Y \n");
    }
    else if (x > y){
        printf("Hello X is greater than y \n");
    }
    else {
        printf("X is equal to Y\n");
    }
}