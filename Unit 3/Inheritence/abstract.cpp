#include<iostream> 
using namespace std;

class A{
    public:
    virtual void show()=0;
    void disp(){
        cout<<"hi i am base class"<<endl;
    }
};
class B : public A{
    public:
    void show(){
        cout<<"hi i am derived class"<<endl;
    }
};
int main()
{
    // A *a;
    // B b;
    // a=&b;
    // a->show();
    B b;
    b.show();
    b.disp();
    return 0;
}