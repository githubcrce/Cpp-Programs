#include<iostream>
using namespace std;


class A{
    int a;
    public:
        A* setData(int a){
            this->a =  a; 
            return this;
        }

        int getData(){
            return this->a;
        }
};


class B{
    int a;
    public:
        B & setData(int a){
            this->a =  a; 
            return *this;
        }

        int getData(){
            return this->a;
        }
};






int main(){

A a;
cout<< a.setData(10)->getData()<<endl;

B b;
cout<< b.setData(10).getData();
    return 1;
}