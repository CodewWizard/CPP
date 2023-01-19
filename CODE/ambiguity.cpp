#include<iostream>
using namespace std;

class Base1{
    public:
        void show(){
            cout<<"Base 1 show"<<endl;
        }
};

class Base2{
    public:
        void show(){
            cout<<"Base 2 show"<<endl;
        }
};

class Derived: public Base1, public Base2{
    public:
        void show(){
           Base1 :: show();  //here ambiguity will be resolved 
        }
};

int main(){
    Base1 base1;
    base1.show();

    Base2 base2;
    base2.show();

    Derived derived;
    derived.show();    

    return 0;
}