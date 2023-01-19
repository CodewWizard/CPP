#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A setData(int a){
        this->a = a;
        return *this;
    }
    void getData(){
        cout<<"Value of a is "<<a<<endl;
    }
};

int main(){
    A obj;
    obj.setData(4).getData();
}

// this is keyword which is a points to the object invokes the member function