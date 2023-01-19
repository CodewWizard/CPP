#include<iostream>
using namespace std;

// Single Inheritance

// class Base{
//     public:
//     int b;
//     void show(int a){
//         cout<<"Base class"<<endl;
//         cout<<a<<endl;
//     }
// };

// class Deri : public Base{
//     public:
//     void val(){
//         cout<<"Value of b is : "<<b<<endl;
//         cout<<"Derived Class"<<endl;
//     }
// };

// int main(){
//     Deri obj;
//     obj.b = 12;
//     obj.show(25);
//     obj.val();
// }


//Multilevel Inheritance

// class One{
//     public:
//     void one(){
//         cout<<"In class One"<<endl;
//     }
// };

// class Two : public One{
//     public:
//     void two(){
//         cout<<"In class two"<<endl;
//     }
// };

// class Three : public Two{
//     public:
//     void three(){
//         cout<<"In class three"<<endl;
//     }
// };

// int main(){
//     Three obj;
//     obj.one();
//     obj.two();
//     obj.three();
// }


// Multiple Inheritance
// class One{
//     public:
//     void one(){
//         cout<<"IN ONE"<<endl;
//     }
// };

// class Two : public One{
//     public:
//     void two(){
//         cout<<"IN TWO"<<endl;
//     }
// };

// class Three : public Two{
//     public:
//     void three(){
//         cout<<"IN THREE"<<endl;
//         two();
//         one();
//     }
// };

// int main(){
//     Three obj;
//     obj.three();
// }



//Multiple Inheritance

// class One {
//     public:
//     void one(){
//         cout<<"IN ONE"<<endl;
//     }
// };

// class Two {
//     public:
//     void two(){
//         cout<<"IN TWO"<<endl;
//     }
// };

// class Three : public One, public Two{
//     public:
//     void three(){
//         cout<<"IN THREE"<<endl;
//     }
// };

// int main(){

//     Three ob_3;
//     ob_3.one();
//     ob_3.two();
//     ob_3.three();
// }