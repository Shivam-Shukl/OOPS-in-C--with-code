#include<iostream>
#include<string>
using namespace std;    
class Geek{
    private:
    string name;
    public:
    void setName(string name){
        this->name = name;
    }
    void introduce(){
        cout<<"Hi, I am "<<name<<endl;
    }
};

int main(){
    Geek geek1;
    geek1.setName("John");
    geek1.introduce();
    return 0;
}