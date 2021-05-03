    #include <iostream>
using namespace std;

class Check
{
  private:
    int i;
  public:
    Check(): i(0) {  }
    Check operator ++()
    {
       Check temp;
       ++i;
       temp.i = i;

       return temp;
    }

    void Display()
    { cout << "i = " << i << endl; }
};

int main()
{
    Check obj, obj1;
    obj.Display();
    obj1.Display();

    obj1 = ++obj;

    obj.Display();
    obj1.Display();

    return 0;
}
