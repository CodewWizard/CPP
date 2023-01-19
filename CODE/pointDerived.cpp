// POLYMORPHISM
// There are two types of POLYMORPHISM
// 1. Compile time polymorphism
//      1.1 - Function Overloading
//      1.2 - Operator Overloading
// 2. Run time polymorphism
//      2.1 - Virtual Function

#include<iostream>
using namespace std;

class Base{
    public: 
    int var_base;
    void display(){
        cout<<"Displayeing base class variable var_base is "<<var_base<<endl;
    }
};
class Derived : public Base{
    public: 
    int var_Derived;
    void display(){
        cout<<"Displayeing base class variable var_base "<<var_base<<endl;
        cout<<"Displayeing Derived class variable var_Derived "<<var_Derived<<endl;
    }
};

int main(){
    Base *p_obj_base;
    Base obj_base;

    Derived *p_obj_derived;
    Derived obj_derived;

    p_obj_base = &obj_derived; // base class pointer point to derived class object

    p_obj_base->var_base = 28;
    p_obj_base->display();

    p_obj_derived = &obj_derived; //derived class pointer point to derived class object

    p_obj_derived->var_Derived = 87;
    p_obj_derived->display();

    p_obj_derived->var_base = 45;
    p_obj_derived->display();

}