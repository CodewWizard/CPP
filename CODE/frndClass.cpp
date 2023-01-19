#include<iostream>
using namespace std;

// Forward declaration
class Complex;

class Calci{
    public:
    int add(int a, int b){
        return(a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex{
    int a, b;
    public:
    void setNo(int n1, int n2){
        a = n1;
        b = n2;
    }

    friend class Calci;
    
    void printNo(){
        cout<<"Your Real part of complex No is "<<a<<" + "<<b<<"i"<<endl;
    }

};

int Calci :: sumRealComplex(Complex c1, Complex c2){
    return(c1.a + c2.a);
}

int Calci :: sumCompComplex(Complex c1, Complex c2){
    return(c1.b + c2.b);
}

int main(){
    Complex c1, c2;
    c1.setNo(1, 2);

    c2.setNo(3,4);

    Calci cal;
    int res = cal.sumRealComplex(c1, c2);
    cout<<"The Sum of real part of complex no is "<<res<<endl;

    int resc = cal.sumCompComplex(c1, c2);
    cout<<"The Sum of complex part of complex no is "<<resc<<endl;
}