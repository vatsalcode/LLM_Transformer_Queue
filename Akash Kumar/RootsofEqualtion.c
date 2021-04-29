#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float disc,d,root1,root2;
printf("Enter the values of a,b,c");
scanf("%f %f %f", &a,&b,&c);
disc=((b*b)-4*a*c);
if(disc<0)
{
    d=sqrt(-disc);
}
else
{
    d=sqrt(disc);
}


if (disc>0){
    root1=(((-b)+d)/(2*a));
    root2=(((-b)-d)/(2*a));
    printf("The root's %f and %f are real", root1, root2);
}
else if(disc==0){
    root1=((-b)/(2*a));
    printf("The root's %f and %f are equal", root1, root1);
}
else{
    printf("The real part is %f ", -b/(2*a));
    printf("and imaginary part is +i%f and -i%f",d/(2*a),d/(2*a));
}
}
