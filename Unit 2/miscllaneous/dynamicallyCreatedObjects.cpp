#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) { 
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student* s = new Student("David", 23); // Dynamically allocated object
    s->display();

    delete s; // Free allocated memory
    return 0;
}
