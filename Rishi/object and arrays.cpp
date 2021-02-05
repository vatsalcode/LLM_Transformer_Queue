#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary[4] = {1, 2, 3, 4};

public:
    void setId(void)
    {
        cout << "Enter id of emplyee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this emplyee is " << id << " and his salary is " << salary[id-1] << endl;
    }
};

int main()
{
    /*employee harry,rohan,lovish,shruti;
     harry.setId();
     harry.getId();
     It is easy to do this for limited employees  but suppose you hae 3000 employees then it is not feasible
     the we have to use arrays. This is how we use arrays
     */
    employee fb[4];
        for (int i = 0; i < 4; i++)
        {
            fb[i].setId();
            fb[i].getId();
        }
        return 0;
    }
