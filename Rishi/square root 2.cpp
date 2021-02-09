//create a function which takes two point objects and calculate distance betweeen them
#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    friend double distance(point, point);
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint(void)
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

double distance(point p, point q)
{
    long w = (pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
    double result = sqrt(w);
    return result;
}
int main()
{
    point p(1, 1);
    p.displaypoint();

    point q(4, 5);
    q.displaypoint();

    double res = distance(p, q);
    cout << "The distance between two point is: " << res << endl;

    return 0;
}
