#include<iostream>
#include<string>
using namespace std;

class ClassExample{
    int prevateVar;
    public:
    void setVar(int var){
        prevateVar = var;
    }
    int getVar(){
        return prevateVar;
    }
};// always public
struct StructExample{
    int prevateVar;
    void setVar(int var){
        prevateVar = var;
    }
    int getVar(){
        return prevateVar;
    }
};
int main()
{
    ClassExample obj1;
    // obj1.privateVar = 10;  // ❌ Error: private by default
    obj1.setVar(33); // ✅ Allowed via public function
    cout<<obj1.getVar()<<endl;

    StructExample obj2;
    obj2.prevateVar = 10; // ✅ Allowed
    obj2.setVar(33); // ✅ Allowed via public function
    cout<<obj2.getVar()<<endl;
    cout<<obj2.prevateVar<<endl;
    return 0;
}