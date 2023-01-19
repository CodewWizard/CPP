#include<iostream>
using namespace std;

class Student{
    public:
        int id;
            void setId(int a){
                id = a;
            }
            void printId(){
                cout<<"Your roll no is "<<id<<endl;
            }
};

class Test : virtual public Student{
    public:
        int m1;
            void setMarks(int a){
                m1 = a;
            }
            void printMarks(){
                cout<<"Your marks of test is "<<m1<<endl; 
            }
};

class Sports : virtual public Student{
    public:
        int score;
            void setScore(int a){
                score = a;
            }
            void printScore(){
                cout<<"Your Score of Sports is "<<score<<endl; 
            }
};

class Result : public Test, public Sports{
    public:
        int total;
        void displayTotal(){
            total = m1 + score;
            printId();
            printMarks();
            printScore();
            cout<<"Yout total marks is "<<total<<endl;
        }
};

int main(){
    Result obj;
    obj.setId(25);
    obj.setMarks(75);
    obj.setScore(98);
    
    obj.displayTotal();

    return 0;
}