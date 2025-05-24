#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    int var1; 
};
class Derived: public Base{
    public:
    void setVar1(int var){
        var1 = var;
    }
    void printVar1(){
        cout<<var1<<endl;
    }
};//struct Inheritence is public by default
struct BaseStruct: public Base{
    void setVar1(int var){
        var1 = var;
    }
    void printVar1(){
        cout<<var1<<endl;
    }
};
int main()
{
    Derived obj1;
    obj1.var1 = 10; // ✅ Allowed
    obj1.setVar1(33); // ✅ Allowed via public function
    obj1.printVar1();
    
    BaseStruct obj2;
    obj2.var1 = 10; // ✅ Allowed
    obj2.setVar1(33); // ✅ Allowed via public function
    obj2.printVar1();
    return 0;
}