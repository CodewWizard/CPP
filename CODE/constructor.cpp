#include<iostream>
using namespace std;

// class Emp{
//     public:
//     void demo(){
//         cout<<"In demo Function of class Emp"<<endl;
//     }

//     Emp(){
//         cout<<"Constructor of Emp class!!"<<endl;
//     }
// };



// int main(){     
//     Emp obj;
//     obj.demo();
// }


// class Add{
//     public:
//       int a, b;
//     Add(){
//         a = 10;
//         b = 10;
//     }
// };
// int main(){
//     Add obj;
//     cout<<"a is "<<obj.a<<endl;
//     cout<<"b is "<<obj.b<<endl;
//     cout<<"Sum is "<<(obj.a + obj.b)<<endl;
// } 


// Constructor does not have any return type
// It must be placed in public section of class
// If we do not define any construcot explicitly, the compliler will automatically provide a default constructor implicitly (with no parameters and no body)

// PARAMETERIZED CONSTRUCTOR

class Emp{
    public:
    int x, y;
    Emp(int a, int b){
        x = a;
        y = b;
    }
    int add(){
        return(x + y);
    }
};

int main(){
    Emp obj(2,5);
    cout<<"a is "<<obj.x<<endl;
    cout<<"b is "<<obj.y<<endl;
    cout<<"Sum is "<<obj.add()<<endl;
}

// Parameterized constructors are used to overload the constructors