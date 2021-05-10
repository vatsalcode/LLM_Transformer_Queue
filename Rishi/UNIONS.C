//union
// It has better memory alloaction
//Less than structures and single shared
#include <stdio.h>
#include <string.h>

union student
{
    int id;
    float marks;
    char fav_char;
    char name[34];
};

int main()
{
    union student harry;
    harry.id = 1;
    harry.marks = 45;
    harry.fav_char = 'u';
    strcpy(harry.name, "Harry");

    printf("The name of employeee is: %s\n ", harry.name);
    printf("The Id of employeee is: %d\n ", harry.id);
    printf("The marks of employeee is: %d\n ", harry.id);
    printf("The Fav character of employeee is: %c\n ", harry.fav_char);

    return 0;
}
