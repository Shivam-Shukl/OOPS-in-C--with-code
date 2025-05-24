#include <iostream>
using namespace std;

class StudentInfo {
private:
    int id;
    string name;
    long long PhoneNo;
    float CGPA;

public:
    StudentInfo() {
        id = -1;
        name = "Not Set";
        PhoneNo = -1;
        CGPA = -1;
        cout << "Default constructor called" << endl;
    }

    StudentInfo(int id, string name, long long PhoneNo, float CGPA) {
        this->id = id;
        this->name = name;
        this->PhoneNo = PhoneNo;
        this->CGPA = CGPA;
        cout << "Parameterized constructor called" << endl;
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Phone No: " << PhoneNo << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

int main() {
    StudentInfo student1;
    StudentInfo student2(31, "Prince", 6901870667, 8.5);
    student1.display();
    student2.display();
    return 0;
}
