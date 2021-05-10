#include<iostream>
using namespace std;

//This helps us to identify that the data in int main will automatically select its function depending upon the arguements.
//Function overloading 
int add(float a, int b){
    cout<<"Using function with two arguements"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"Using fuction with three arguements"<<endl;
    return a+b+c;
}
//calculate the volume of cylinder
float volume(double r,int h){
    return(3.14*r*r*h);
}
//calculate the volume of cube
int volume(int a)
{
    return (a*a*a);
}
//calculate the volume of cuboid
int volume(int l,int b,int h){
   return(l*b*h);
}

 int main(){

cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
cout<<"The sum of 3 and 6 and 7 is "<<add(3,6,7)<<endl;
cout<<"The volume of cuboid of sides 3,7,6 is "<<volume(3,7,6)<<endl;
cout<<"The volume of cylinder of sides radius  3 and height 6 is "<<volume(3,6)<<endl;
cout<<"The volume of cube of side 3 is"<<volume(3)<<endl;
     return 0;
 }
