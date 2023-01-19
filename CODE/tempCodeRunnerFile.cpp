plex{
    public:
    int real, imag;
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    Complex operator+(Complex &obj){
        Complex result;
        result.real = real + obj.real; 
        result.imag = imag + obj.imag; 
        return result;
    }
    void print(){
        cout<< real << " + i" << imag << endl;
    }
};

int main(){
    Complex obj1(3,5), obj2(7, 2);
    Complex obj3 = obj1 + obj2;
    obj3.print();
}