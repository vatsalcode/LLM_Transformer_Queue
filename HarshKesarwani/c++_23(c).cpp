#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "the point is " << x << " , " << y << endl;
    }
};

int main()
{
    point p(1, 1);
    point q(4, 6);
    p.display();
    q.display();
    return 0;
}
