#include <iostream>

using namespace std;
class large
{
    static float a,b;
public:
    void get()
    {
       cout<<"Enter the two number "<<endl;
       cin>>a>>b;
    }
    float largest()
    {
       if(a>b)

           {return a;}
       else{
        return b;
       }
    }
    void put()
    {
       cout<<"The largest number is "<<largest()<<endl;
    }
};
float large::a;
float large::b;
int main()
{
    large s1;
    s1.get();
    s1.put();

}
