#include<iostream>
using namespace std;

float area(int base, int height){
    float res = 0.5 * base * height;
    return res;
}

int area(int a){
    return (3.14 * a * a);
}

// int main{
int main(){ 
    int base, height, radius;
    cout<<"Enter base and height"<<endl;
    cin>>base>>height;

    cout<<"Area of Tringle is "<<area(base, height)<<endl;

    cout<<"Enter radius"<<endl;
    cin>>radius;

    cout<<"Area of Circle is "<<area(radius)<<endl;
}


