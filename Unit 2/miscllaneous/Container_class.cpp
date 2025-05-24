#include <iostream>
using namespace std;

class Student {
public:
    string name;
    Student(string n) { name = n; }
};

class Container {
public:
    Student *s;
    Container(string n)
    {
        s = new Student(n);
    }
    void display()
    {
        cout << "Name: " << s->name << endl;
    }
    ~Container()
    {
        delete s;
    }
};
int main()
{
    Container c("Prince");
    c.display();
    return 0;
}