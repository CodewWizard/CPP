#include<iostream>
using namespace std;

class Base{
    public: 
    int var_base = 1;
     virtual void display(){
        cout<<"1 Displaying base class variable var_base is "<<var_base<<endl;
    }
};
class Derived : public Base{
    public: 
    int var_Derived = 2;
    void display(){
        cout<<"2 Displaying base class variable var_base "<<var_base<<endl;
        cout<<"2 Displaying Derived class variable var_Derived "<<var_Derived<<endl;
    }
};


int main(){
    Base *bptr;   //base class pointer
    Base bobj;   // base class object
    Derived dobj;   //derived class object

    bptr = &dobj;  //base class pointer points to the derived class object
    bptr->display();
}