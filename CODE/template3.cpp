#include<iostream>
using namespace std;

template<class T1 = float, class T2 = int, class T3 = char>
class Demo{
    public:
    T1 a;
    T2 b;
    T3 c;
    Demo(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"a is "<<a<<endl;
        cout<<"b is "<<b<<endl;
        cout<<"c is "<<c<<endl;
    }
};

int main(){
    Demo<> ob(1.4, 9, 'j');
    ob.display();
    cout<<endl;  
    Demo<char, float, char> ob1('q', 7.2, 'y');
    ob1.display();
}