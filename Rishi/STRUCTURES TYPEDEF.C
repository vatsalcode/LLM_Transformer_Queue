//Structures typedef
#include <stdio.h>

//We have assigned  a nickname using typedef
//Not necessary we have to give name ef, we can give any name
//We can also use it as typedef unsigned int ef;  so in place of unsigned int we can use ef
//We can also use the original name as well

typedef struct student
{
    int id;
    float marks;
    char fav_char;
} ef;

int main()
{
    ef harry, ravi, anil;
    harry.id = 0;
    ravi.id = 1;
    anil.id = 2;

    harry.marks = 0;
    ravi.marks = 1;
    anil.marks = 2;

    harry.fav_char = 'a';
    ravi.fav_char = 'b';
    anil.fav_char = 'c';

    printf("Harry got %d marks ", harry.marks);

    return 0;
}
