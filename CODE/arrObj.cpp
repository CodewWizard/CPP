#include<iostream>
using namespace std;

// Array of Objects & passing objects as funcion arguments

// class Emp{
//     public:
//     int id, salary = 122;
//     void setId(){
//         cout<<"Enter the id of Empoyee "<<endl;
//         cin>>id;
//     }

//     void getId(){
//         cout<<"Id of Employee is "<<id<<endl;
//     }
// };

// int main(){
//     Emp obj[5];
//     for (int i = 0; i < 5; i++)
//     {
//         obj[i].setId();
//         obj[i].getId();
//     }
    

// passing objects as a arguments

class Complex{
    public:
    int a,b;
    void setNo(int a1, int b1){
        a = a1;
        b = b1;
    }

    void setNoBySum(Complex c1, Complex c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void printNo(){
        cout<<"Sum is "<<a<<"+"<<b<<"i"<<endl;
        // cout<<"Sum is "<<a<<"+"<<b<<"i"<<endl;
    }
};  

int main(){
    Complex c1, c2,c3;
    c1.setNo(2, 3);
    c1.printNo();

    c2.setNo(1, 4);
    c2.printNo();

    c3.setNoBySum(c1, c2);
    c3.printNo();
}