#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s[3]; // Array of 3 objects

    s[0].setData("Alice", 20);
    s[1].setData("Bob", 22);
    s[2].setData("Charlie", 21);

    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}
