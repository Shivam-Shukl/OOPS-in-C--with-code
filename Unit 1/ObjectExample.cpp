#include<iostream>
#include<string>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void introduce(){
        cout << "Hi, I am " << name << " and I am " << age << " years old." << endl;
    }
};

int main(){
    Person person1;
    person1.name = "John";
    person1.age = 25;
    person1.introduce();
}
