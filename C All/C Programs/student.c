#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[25];
    char city[10];
};

int main()
{
    struct student s[5];
    int i;
    char city[10];
    for (i = 0; i < 5; i++)
    {

        printf("enter student id:");
        scanf("%d", &s[i].id);

        printf("enter student name:");
        scanf("%s", s[i].name);

        printf("enter student city:");
        scanf("%s", s[i].city);
    }
    printf("Enter the city what you want to search:");
    scanf("%s", city);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(city, s[i].city) == 0)
        {
            puts(s[i].name);
            printf("\n");
        }
    }
}
