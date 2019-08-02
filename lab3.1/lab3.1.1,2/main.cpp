#include <iostream>
#define pi 3.14

using namespace std;
class area
{
   static float r;
   public:
       void getradius()
       {

    cout<<"Enter the radius: "<<endl;
    cin>> r;
}
       void printarea()
       {
           cout<<"The area is "<<pi*r*r<<endl;
       }


};

float area::r;

class square
{
   static float l;
   public:
       void getlength()
       {
            cout<<"Enter the length: "<<endl;
            cin>>l;
       }
       void printarea()
       {
           cout<<"The area is "<<l*l<<endl;
       }
       void printperimeter()
       {
           cout<<"the perimeter is "<<4*l<<endl;
       }


};
float square::l;

int main()
{
area radius;
radius.getradius();
radius.printarea();
square length;
length.getlength();
length.printarea();
length.printperimeter();
}
