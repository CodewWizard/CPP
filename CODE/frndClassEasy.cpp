#include<iostream>
using namespace std;

// class A{
//     int x = 5;
//     friend class B;
// };

// class B{
//     public:
//     void display(A &a){
//         cout<<"Value of x is "<<a.x;
//     }
// };

// int main(){
//     A a;
//     B b;
//     b.display(a);
// }


// class A{
//     int a = 3, b =5;
//     friend class B;
// };

// class B{
//     public:
//     void add(A &x, A &y){
//          int sum = x.a + y.b;
//          cout<<"Sum of a and b is "<<sum<<endl;
//     }
// };

// int main(){
//     A a1,a2;
//     B b;
//     b.add(a1, a2);
// }



class B;

class A{
    int a;
    public:
        void setValue(int data){
            a = data;
        }
        friend void add(A, B);
};

class B{
    int b;
    public:
        void setValue(int data){
            b = data;
        }
        friend void add(A, B);

};

void add(A x, B y){
    cout<<"Sum is "<<(x.a + y.b)<<endl;
}

int main(){
    A a;
    a.setValue(3);

    B b;
    b.setValue(5);

    add(a, b);
}












