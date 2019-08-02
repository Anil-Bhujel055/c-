#include <iostream>

using namespace std;
class batsman
{
    char name[20];
    int r,f,s;
public:
    void information(){
    cout<<"Enter the name of the batsman"<<endl;
    cin>>name;
    cout<<"Enter the no of runs"<<endl;
    cin>>r;
    cout<<"Enter the number of fours"<<endl;
    cin>>f;
    cout<<"Enter the no of sixes"<<endl;
    cin>>s;}
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Runs: "<<r<<endl<<"No. of Fours: "<<f<<endl<<"No. of sixes: "<<s<<endl;
    }
};
int main()
{ int i;
    batsman m[5];
    for(i=0;i<5;i++)
    {
        m[i].information();

    }
    for(i=0;i<5;i++)
    {
        m[i].display();
    }
}
