#include<iostream>
using namespace std;

class Complex{
     int a,b;
    public:
        void setNo(int n1, int n2){
            a = n1;
            b = n2;
        }

        friend Complex sumComplex(Complex c1, Complex c2);

        void printNo(){
            cout<<"Your no is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex c1, Complex c2){
    Complex c3;
    c3.setNo((c1.a + c2.a) , (c1.b + c2.b));
    return c3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNo(1, 2);
    c1.printNo();

    c2.setNo(3 ,4);
    c2.printNo();  

    sum  = sumComplex(c1, c2);
    sum.printNo();
}


/* Properties of Friend Function
    1. Not in the scope of class
    2. Since it is not in the scope of class, it cannot be called from the object of that class. c1.sumComplex() is invalid
    3. Can be invoked without the help of any object
    4. Usually contains the objects as arguments
    5. Can be declared inside public or private section of the class
    6. It cannot access he members directly by their names and need object_name.member_name to access any member 
*/
