#include <stdio.h>

float kms_miles(float x)
{
    printf("Enter the values of distance in Km\n");
    scanf("%f", &x);
    printf("The distance in miles is %f", (0.621 * x));
}
float cm_inches(float y)
{
    printf("Enter the values of distance in Cm\n");
    scanf("%f", &y);
    printf("The distance in inches is %f", (0.394 * y));
}
float inches_feet(float z)
{
    printf("Enter the values in inches\n");
    scanf("%f", &z);
    printf("The value in feet is %f", (0.833 * z));
}

float pound_kgs(float p)
{
    printf("Enter wieght in pounds\n");
    scanf("%f", &p);
    printf("The weight in kgs  is %f", (0.454 * p));
}
float inches_meter(float q)
{

    printf("Enter the values in inches\n");
    scanf("%f", &q);
    printf("The value in meter is %f", (0.0254 * q));
}

int main()
{
    int a;
    float b, c, d, e, f;
    printf("This the conersion page:\n\n");
    printf("You can do following conersions\n");
    printf("1. kms to miles\n");
    printf("2. cm to inches\n");
    printf("3. inches to feet\n");
    printf("4. pound to kgs\n");
    printf("5. Inches to meter\n\n");
    printf("Select the number corresponding to which conversion you want to make\n");
    scanf("%d", &a);

    if (a == 1)
    {
        kms_miles(b);
    }
    else if (a == 2)
    {
        cm_inches(c);
    }
    else if (a == 3)
    {
        inches_feet(d);
    }
    else if (a == 4)
    {
        pound_kgs(e);
    }
    else
    {
        inches_meter(f);
    }

    return 0;
}
