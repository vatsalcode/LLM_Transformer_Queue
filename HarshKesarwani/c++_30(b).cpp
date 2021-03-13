#include <iostream>
#include <cstring>
using namespace std;

class v
{
protected:
    string title;
    float rating;

public:
    v(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display()
    {
    }
};

class v_video : public v
{
    float videolength;

public:
    v_video(string s, float r, float vl) : v(s, r)
    {
        videolength = vl;
    }

    void display()
    {
        cout << "Amazing video with title " << title << endl;
        cout << "Rating " << rating << endl;
        cout << "Length of the video " << videolength << endl;
    }
};

class v_text : public v
{
    int words;

public:
    v_text(string s, float r, int w) : v(s, r)
    {
        words = w;
    }

    void display()
    {
        cout << "Amazing text tutorial with title " << title << endl;
        cout << "Rating " << rating << endl;
        cout << "Number of words " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "ABCD EFGH";
    vlen = 4.56;
    rating = 4.1;
    words = 3243;

    v_video v1(title, rating, vlen);
    //v1.display();

    title = "ABCD EFGH WORDS";
    rating = 3;
    v_text t1(title, rating, words);
    //t1.display();

    v *prt[2];
    prt[0] = &v1;
    prt[1] = &t1;

    prt[0]->display();
    prt[1]->display();

    return 0;
}
