#include<iostream>
using namespace std;

class Demo{
    int real, imagin;
    public:
    int setData(int a, int b){
        real = a;
        imagin = b;
    }
    void getData(){
        cout<< "Value of a is " << real << endl;
        cout<< "Value of b is " << imagin << endl;
    }
};

int main(){
    Demo obj1;
    Demo *ptr;
    ptr = &obj1;
    // Demo *p = new Demo(); // i can do this too
      // obj1.setData(25, 57);
    // obj1.getData();

    // (*ptr).setData(25, 50);
    // (*ptr).getData(); 

    //Arrow Operator
    // ptr->setData(10,40);
    // ptr->getData();

    //Array of objects
    Demo *p = new Demo[3];
    p->setData(92, 45);
    p->getData();

    (p+1)->setData(12,48);
    (p+1)->getData();

}
