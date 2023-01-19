#include<iostream>
using namespace std;

class Demo{
    public:
    Demo(){
        cout<<"Constructor is called"<<endl;
    }
    ~Demo(){
        cout<<"Destructor is called"<<endl;
    }
    void show(){
        cout<<"Show function is called"<<endl;
    }
};

int main(){
    Demo obj;
    obj.show();
}