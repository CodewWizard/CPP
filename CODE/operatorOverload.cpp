#include<iostream>
using namespace std;

// class Complex{
//     public:
//     int real, imag;
//     Complex(int r = 0, int i = 0){
//         real = r;
//         imag = i;
//     }
//     Complex operator+(Complex &obj){
//         Complex result;
//         result.real = real + obj.real; 
//         result.imag = imag + obj.imag; 
//         return result;
//     }
//     void print(){
//         cout<< real << " + i" << imag << endl;
//     }
// };

// int main(){
//     Complex obj1(3, 5);
//     Complex obj2(7, 2);
//     Complex obj3 = obj1 + obj2;
//     obj3.print();
// }


// Example 2
// class Test{
//     public:
//     int num;
//     Test(int num){
//         cout<<"Enter the num "<<endl;
//         cin>>this->num;
//     }

//     void operator ++(){
//         num +=2;
//     }

//     void print(){
//         cout << num << endl;
//     }
// };

// int main(){
//     Test obj(5);
//     ++obj;
//     obj.print();
// }

// Example 3

// class Demo{
//     public:
//     int a;
//     Demo(int a){
//         cout<<"Enter the num "<<endl;
//         cin>>this->a;
//     }
//     void operator--(){
//         a -= 2;
//     }
//     void print(){
//         cout << a << endl;
//     }
// };

// int main(){
//     Demo obj(8);
//     --obj;
//     obj.print();
// }


// Example 4

class Add{
    public:
    int num;
    Add(int num){
        this->num = num;
    }

    void operator+(Add x){
            int result;
            result = num + x.num;
            cout << result << endl;
    }

};

int main(){
    Add obj1(8);
    Add obj2(2);
    obj1 + obj2;
}