// Static variables
#include <stdio.h>

void func1(int b1)
{
    static int myvar = 0;
    printf("The value of my var is %d\n", myvar);
    myvar++;

    //Agli baar myvar ki value 1 ho jaayegi
    //wo apni memory ko kabhi bhulega
    //It keeps its memory entacked
    //It saves the new value in it(Yaad rakhega nyi value)
    //Static variable can only taek contant literals
}

int main()
{
    int b = 344;
    func1(b);
    func1(b);
    func1(b);
    return 0;
}
