#include<iostream>
using namespace std;

template<class T1> void display(T1 x){
    cout<<x<<endl;
}

template<class T2> void display(T2 x, T2 y){
    cout<<x<<" ";
    cout<<y<<endl;
}

int main(){
    display(3);
    display("madiha", "mujawar");
}