/*
We run a travel agency and want all drivers to enter the following information.
1. Name
2. Driving License no
3. Route
4. Kms

Programme should take n as input and all drivers neet to enter the information 

We have to display details of all the drivers 
*/

#include <stdio.h>
#include <string.h>

struct travel_agent
{
    char name[100];
    int license_no;
    char route[100];
    float kms;
};

int main()
{
    int a;
    printf("Enter the no of drivers in the agency: \n");
    scanf("%d", &a);

    struct travel_agent arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("\nEnter the folowing details for driver no %d \n", i + 1);
        printf("Enter Name of Driver: ");
        scanf("%s",&arr[i]);     //It will take input without space only 
        printf("Enter Licence Number of Driver: ");
        scanf("%d", &arr[i].license_no);
        printf("Enter route followed by Driver: ");
        scanf("%s", &arr[i].route);
        printf("Enter Distance travelled by Driver: ");
        scanf("%f", &arr[i].kms);
    }

    printf("\n\nThe following are the datails for all the drivers. \n\n");

    for (int i = 0; i < a; i++)
    {
        printf("Details of Driver number %d\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Licence number: %d\n", arr[i].license_no);
        printf("Route: %s\n", arr[i].route);
        printf("Distance Travelled : %f\n\n", arr[i].kms);
    }

    return 0;
}
