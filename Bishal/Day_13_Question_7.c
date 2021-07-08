#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int range = n * 2 - 1;
    for(int i=0; i < range; i++){
        for(int j=0; j < range; j++){
            int temp = i < j ? i : j;
            temp = temp < range - i ? temp : range - i - 1;
            temp = temp < range - j - 1 ? temp : range - j - 1;
            printf("%d ", n-temp);
        }
        printf("\n");
    }
    return 0;
}
/*
 *
 * 5
 * 5 5 5 5 5 5 5 5 5
 * 5 4 4 4 4 4 4 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 2 1 2 3 4 5
 * 5 4 3 2 1 2 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 4 4 4 4 4 4 5
 *
 *
 * 2
 * 2 2 2
 * 2 1 2
 * 2 2 2
 *
 * 
 * 3
 * 3 3 3 3 3
 * 3 2 2 2 3
 * 3 2 1 2 3
 * 3 2 2 2 3
 * 3 3 3 3 3 
 * 
 */
