#include <conio.h> 
#include <iostream.h> 
#include <stdlib.h> 
void main() 
{ 
    clrscr(); 
    randomize(); 
    char courses[][10] = { "M.Tech", "MCA", "MBA", "B.Tech" }; 
    int ch; 
    for (int i = 1; i <= 3; i++) { 
        ch = random(i) + 1; 
        cout << courses[ch] << "\t"; 
    } 
    getch(); 
} 
