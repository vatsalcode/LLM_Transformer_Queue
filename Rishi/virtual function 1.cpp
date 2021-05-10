#include <iostream>
#include <cstring>
using namespace std;

class carryminati
{
protected:
    string title;
    float rating;

public:
    carryminati(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "Bogus code" << endl;
    }
};

class carryminati_video : public carryminati
{
    int videolength;

public:
    carryminati_video(string s, float r, float vl) : carryminati(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of video is: " << videolength << " Minutes" << endl;
    }
};

class carryminati_text : public carryminati
{
    int word_count;

public:
    carryminati_text(string s, float r, int cr) : carryminati(s, r)
    {
        word_count = cr;
    }
    void display()
    {
        cout << "\nThis is an amazing text with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "No of characters in the text are:" << word_count << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    //For carryminati video
    title = "C++ full course video";
    rating = 4.56;
    vlen = 15;

    carryminati_video video_1(title, rating, vlen);
    video_1.display();

    //For carryminati text
    title = "C++ full course Text ";
    words = 425;
    rating = 4.5;

    carryminati_text text_1(title, rating, words);
    text_1.display();

    carryminati *tuts[2];
    tuts[0] = &video_1;
    tuts[1] = &text_1;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
