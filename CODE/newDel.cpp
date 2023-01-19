#include<iostream>
using namespace std;


int main(){
    int *ptr, a = 10;
    ptr = &a;
    cout<<"Value of a is "<<(*ptr)<<endl;

    // new operator
    // Dynamicaly initialize the integer
    // int *p = new int(5);
    float *p = new float(5.19);
    cout<<"Value at address p is "<<*p<<endl;

    // to allocate block of memory
    int *arr = new int[5];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    // delete[] arr;

    cout<<"Value of arr[0] is " << arr[0] << endl;
    cout<<"Value of arr[1] is " << arr[1] << endl;
    cout<<"Value of arr[2] is " << arr[2] << endl;
    cout<<"Value of arr[3] is " << arr[3] << endl;
    cout<<"Value of arr[4] is " << arr[4] << endl;


    // delete operator


    return 0;
}