/*
It will show advance use of inheritance and static data members
contruct 3 classes person and other 2 named student and professor derived from it
create getdata to fetch some data and putdata to display that, name and age are common so they are declared in person
ask the user to enter no of objects to be made
if he enters 1 point to professor otherwise to student
for professor display name age id and publications
for student display name age id and sum of marks 
initialise id to 1 and then increase it constantly 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name;
    int age;
    virtual void getdata()
    {
    }
    virtual void putdata()
    {
    }
};
class Professor : public Person
{
    int publications;
    static int cur_id;

public:
    void getdata()
    {
        cin >> name >> age >> publications;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
        cur_id++;
    }
};
int Professor ::cur_id = 1;
class Student : public Person
{
    int marks[6];
    static int cur_id;

public:
    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void putdata()
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum = sum + marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
        cur_id++;
    }
};
int Student ::cur_id = 1;

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
