#include<iostream>
using namespace std;

class ShopItem{
    int id, price;
    public:
    void setData(int a, int  b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};

int main(){
    int size = 3, i, p, q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *temp = new ShopItem();
    ptr = temp;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter id if item "<<i+1<<endl;
        cin>>p;
        cout<<"Enter price if item "<<i+1<<endl;
        cin>>q;
        ptr->setData(p, q);
        ptr++;
    }   

    for (i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<" : "<<endl;
        temp->getData();
        temp++;

    }
    
    
}