#include<stdio.h>
typedef struct COMPLEX{
    int a;
    int b;
}Complex;
Complex multiply(Complex, Complex);
int main(){
    int a1, b1, a2, b2;
    Complex x, y, z;
    printf("Enter first complex number : ");
    scanf("%d+%di", &a1, &b1);
    printf("\nEnter second complex number : ");
    scanf("%d+%di", &a2, &b2);
    x.a = a1;
    x.b = b1;
    y.a = a2; 
    y.b = b2;
    z = multiply(x, y);
    printf("\nAfter multiplication: %d+%di", z.a, z.b);
    return 0;
}
Complex multiply(Complex x, Complex y){
    Complex z;
    z.a = x.a * y.a - x.b * y.b;
    z.b = x.a * y.b + x.b * y.a;
    return z;
}
