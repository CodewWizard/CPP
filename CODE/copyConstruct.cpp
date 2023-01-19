#include<iostream>
using namespace std;

// class Demo{
//     public:
//     int x;
//     Demo(int a){
//         x = a;
//     }
//     Demo(Demo &i){
//         cout<<"Copy Constructor"<<endl;
//         x = i.x;
//     }
// };

// int main(){
//     Demo a1(10);
//     Demo a2(a1);
//     cout<<"Value of x is "<<a2.x<<endl;
// }

// COPY CONSTRUCTOR
// Copy constructor is member function which initializes an object using another object of the same class.  
// IMP*******
// When no copy constructor is found, compiler supllies its own copy constructor


class Emp{
    int a;
    public:
        int id;
        string name;
        Emp(){};
        Emp(int num, string n){
            id = num;
            name = n;
        }
        Emp(Emp &obj){
            cout<<"Copy constructor called!!"<<endl;
            id = obj.id;
            name = obj.name;
        }

        void display(){
            cout<<"Id is "<<id<<endl;
            cout<<"Names is "<<name<<endl;
        }
        ~Emp(){}
};

int main(){
    Emp x(1, "madiha");
    Emp z1(x);   //Copy consructor invoked
    z1.display();   
   
    // z2 = z; //Copy constructor not called

    // Emp z3 = z;   //Copy constructor is invoked
    // z3.display();
}