/*
Write a program to find the number of vowels, consonents, digits and white space characters in a string.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    int vowels = 0, consonants = 0, digits = 0, white_space = 0;
    for (int i = 0; i < s.length() ; i++)
    {
        if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'A' || s.at(i) == 'E' || s.at(i) == 'I' || s.at(i) == 'O' || s.at(i) == 'U')
        {
            vowels++;
        }
        else if ((s.at(i) > 'a' && s.at(i) <= 'z') || (s.at(i) > 'A' && s.at(i) <= 'Z'))
        {
            consonants++;
        }
        else if (s.at(i) >= '0' && s.at(i) <= '9')
        {
            digits++;
        }
        else
        {
            white_space++;
        }
    }
    cout << "Number of vowels are:  " << vowels << endl;
    cout << "Number of consonants are:  " << consonants << endl;
    cout << "Number of digits are:  " << digits << endl;
    cout << "Number of spaces are are:  " << white_space << endl;

    return 0;
}
