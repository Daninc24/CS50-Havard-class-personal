#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct MyStruct
{
    string name;
    string number;
}
person;
int main(void)
{
    person people[4];
    people[0].name = "Alice";
    people[0].number = "123-456-7890";
    people[1].name = "Bob";
    people[1].number = "234-567-8901";
    people[2].name = "Charlie";
    people[2].number = "345-678-9012";
    people[3].name = "Diana";
    people[3].number = "456-789-0123";

    string name  = get_string("Enter a name: ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(name, people[i].name) == 0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Number not found.\n");
    return 1;
}