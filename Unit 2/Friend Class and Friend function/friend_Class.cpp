#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) { name = n; age = a; }

    // Declaring Friend Class
    friend class Display;
};

// Friend class definition
class Display {
public:
    void showInfo(Student s) {
        cout << "Name: " << s.name << ", Age: " << s.age << endl;  // Access private data
    }
};

int main() {
    Student s1("Bob", 22);
    Display d;
    d.showInfo(s1); // Friend class accessing private members

    return 0;
}
