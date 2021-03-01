#include<iostream>
using namespace std;
class Shape{

    public:
    int a;
    int b;
    void get_data(int m , int n)
    {
        a = m;
        b = n;
    }

};
class Rectangle: public Shape{
    public:
    int rect_area()
    {
        int result = a*b;
        return result;
    }

};
class Triangle : public Shape{
    public:
    int tri_area()
    {
        float result = 0.5*a*b;
        return result;
    }

};
class Rect : public Shape{
    public:
    int perimeter()
    {
        int peri = 2*(a+b);
        return peri;
    }

};
int main()
{
    Rectangle r;
    Triangle t;
    Rect r1;
    int length,bredth;
    cout<<"Enter the length and bredth of rectangle";
    cin>>length>>bredth;
    r.get_data(length,bredth);
    r1.get_data(length,bredth);
    t.get_data(length,bredth);
    cout<<"Area of Rectangle is "<<r.rect_area()<<endl;
    cout<<"Area of Triangle is "<<t.tri_area()<<endl;
    cout<<"Perimeter of Rectangle is "<<r1.perimeter()<<endl;
    return 0;
}