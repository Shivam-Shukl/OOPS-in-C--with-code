#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

using namespace std;

int main(){
    // Opening files using constructor and reading it
    
    string st = "harry bhai";
    // ofstream out("sample.txt"); // Write operation
    // out<<st;
    // readng file
    string st2;
    ifstream in("b.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}
