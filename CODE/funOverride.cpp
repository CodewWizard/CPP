#include<iostream>
using namespace std;

class A{
    public:
    void show(int a){
        cout<<"Base class show\n";
        cout<<a<<endl;
    }
};

class B : public A{
    public:
    void show(int a){
        cout<<"Derived class show\n";
        cout<<a<<endl;
    }
};

int main(){
    A obj_a;
    B obj_b;
    obj_a.show(2);
    obj_b.show(4);
}