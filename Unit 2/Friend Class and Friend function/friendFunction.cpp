#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) { name = n; age = a; }

    // Declaring a friend function
    friend void showStudentInfo(Student s);
};

// Friend function definition
void showStudentInfo(Student s) {
    cout << "Name: " << s.name << ", Age: " << s.age << endl;  // Can access private members
}

int main() {
    Student s1("Alice", 20);
    showStudentInfo(s1); // Friend function accessing private data

    return 0;
}
