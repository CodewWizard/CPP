#include<iostream>
using namespace std;


class A{
    public:
    void print(){
        cout<<"Prints the line "<<endl;
    }
}ob1;

int main(){
    ob1.print();
}

// You have to put the semicolon there so the compiler will know whether you declared any instances(objects) or not
