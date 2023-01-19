#include<iostream>
using namespace std;

class Demo{
    public:
    int a,b;
    Demo(){
        a = 0;
        b = 0;
    }
    Demo(int x){
        a = x;
        b = 0;
    }
    Demo(int x, int y){
        a = x;
        b = y;
    }
    void printNo(){
        cout<<"Sum is "<<a+b<<endl;
    }
};

int main(){
    Demo obj;
    obj.printNo();

    Demo obj1(2);
    obj1.printNo();

    Demo obj2(2, 4);
    obj2.printNo();
}