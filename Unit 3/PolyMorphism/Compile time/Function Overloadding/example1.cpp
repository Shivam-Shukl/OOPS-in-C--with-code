#include<iostream>
using namespace std;

class Area
{
    public:
    void findArea(int a, int b)
    {
        cout<<"the area of recatangle is "<<a*b<<endl;
    }
    void findArea(int a)
    {
        cout<<"the area of square is "<<a*a<<endl;
    }
    void findArea(double h,double b)
    {
        cout<<"the area of triangle is "<<0.5*h*b<<endl;
    }
};


int main()
{
    Area a;
    a.findArea(10.0,20.0);
    a.findArea(10);
    return 0;
}