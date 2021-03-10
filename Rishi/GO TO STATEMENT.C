//go to statement
#include <stdio.h>
int main()
{
label:
    printf("We are at label");
    goto end;
    printf("Hello world");

    goto label;
end:
    printf("We are end");

    return 0;
}

//But this is not recommended
