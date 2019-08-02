#include <iostream>

using namespace std;
class item
    {
        static int count;
    public:
        void getdata(){
        count++;
        cout<<"It is called by "<<count << "times"<<endl;
        }
    };
    int item::count=0;
int main()
{
   item s1,s2,s3;
   s1.getdata();
   s2.getdata();
   s1.getdata();
}
