#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // parameterized constructor
    Student(int id, string name) {
        this->id = id;
        this->name = name;
        cout << "Constructor called for " << name << endl;
    }
    // destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
    // disply function
    void display() {
        cout << "Student ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    cout << "Creating Student A..." << endl;
    Student A(101, "Alice");
    A.display();

    cout << "\nCreating Student B dynamically..." << endl;
    Student* B = new Student(102, "Bob");
    B->display();

    cout << "\nDeleting Student B..." << endl;
    delete B;  // Destructor is explicitly called when deleting dynamically allocated object

    cout << "\nEnd of main function..." << endl;
    return 0;  // Destructor for A is automatically called here
}
