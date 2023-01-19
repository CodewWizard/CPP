// MULTIPLE PARAMETERS
#include<iostream>
using namespace std;

template<class T1, class T2>
class Demo{
    public:
    T1 a;
    T2 b;
    Demo(T1 x, T2 y){
        a = x;
        b = y;
    }

    void display(){
        cout<<"a is "<<a<<endl;
        cout<<"b is "<<b<<endl;
    }
};

int main(){
    Demo<float, char> ob(9.3, 'm');
    ob.display();
}