#include<iostream>
using namespace std;

class Base{
    public:
        void show(){
            cout<<"Base show"<<endl;
        }
};

class Derived : public Base{
    public:
    //here derived function will be override and it will execute
        void show(){
            cout<<"Derived show"<<endl;
        }
};

int main(){
    Base baseObj;
    baseObj.show();

    Derived derivedObj;
    derivedObj.show();
    return 0;
}