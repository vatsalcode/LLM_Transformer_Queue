#include<iostream>
using namespace std;

int main()
{
    int maths[] = {55, 87, 98};
    int science[] = {56, 66, 89};

    int mathsd[] = {65, 77, 99};
    int scienced[] = {86, 96, 99};

    cout << "Welcome to your result portal" << endl
         << endl;
    char section;
    cout << "Specify your section(A or B) " << endl;
    cin >> section;
    if (section == 'A')
    {
        int name;
        cout << "This section has three students(Priti(1), Dhriti(2) and Neeti(3) )" << endl;
        cout << "Enter your Roll number  " << endl;
        cin >> name;
        if (name == 1 )
        {
            cout << "Here is your result" << endl
                 << endl;
            cout << "Your number in maths is : " << maths[0] << endl;
            cout << "Your number in science is : " << science[0] << endl;
        }
        else if (name == 2 )
        {
            cout << "Here is your result" << endl
                 << endl;
            cout << "Your number in maths is : " << maths[1] << endl;
            cout << "Your number in science is : " << science[1] << endl;
        }
        else if (name == 3 )
        {
            cout << "Here is your result" << endl
                 << endl;
            cout << "Your number in maths is : " << maths[2] << endl;
            cout << "Your number in science is : " << science[2] << endl;
        }
        else
        {
            cout << "Enter a valid Roll number" << endl;
        }
    }
    else if (section == 'B')
    {
        int named;
        cout << "This section has three students(Vansh(1) , Ansh(2) and Manan(3) )" << endl;
           cout << "Enter your Roll number  " << endl;
        cin >> named;
        if (named == 1)
        {
            cout << "Here is your result" << endl
                 << endl;
            cout << "Your number in maths is : " << mathsd[0] << endl;
            cout << "Your number in science is : " << scienced[0] << endl;
        }
        else if (named == 2 )
        {
            cout << "Here is your result" << endl
                 << endl;
            cout << "Your number in maths is : " << mathsd[1] << endl;
            cout << "Your number in science is : " << scienced[1] << endl;
        }
        else if (named == 3 )
        {
            cout << "Here is your result" << endl
                 << endl;
            cout << "Your number in maths is : " << mathsd[2] << endl;
            cout << "Your number in science is : " << scienced[2] << endl;
        }
        else
        {
            cout << "Enter a valid roll number" << endl;
        }
    }
    else
    {
        cout << "Enter a valid section" << endl;
    }
    return 0;
}
