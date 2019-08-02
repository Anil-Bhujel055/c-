#include <iostream>

using namespace std;
class employee
{
    char Name[20],address[20];
    double p;
    int s,ns,t;
    float calculate()
    { float ns=0.0;
        ns=s-((t*s)/100);

		return ns;
    }
public:
    void input()
    {
        cout<<"Enter the name of employee: "<<endl;
        cin>>Name;
        cout<<"Enter the address:"<<endl;
        cin>>address;
        cout<<"Enter the phone number:"<<endl;
        cin>>p;
        cout<<"Enter the salary:"<<endl;
        cin>>s;
        cout<<"Enter the tax:"<<endl;
        cin>>t;
    }
    void output()
    {
        cout<<"Name:"<< Name<<endl<<"Address: "<<address<<endl<<"Ph.no.: "<< p<<endl<<"Salary: "<<s<<endl<<"Tax: "<<t<<endl<<"Net salary: "<<calculate()<<endl;
    }
};
int main()
{
	employee s1;
	s1.input();
	s1.output();
}
