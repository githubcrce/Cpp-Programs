#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class P1{
public:
    virtual void print(){
        cout<<"p1"<<endl;
    }
};

class P2 : public P1{
public:
    void print(){
        cout<<"p2"<<endl;
    }
};


void display(int x, double y){
    cout<<"display1"<<endl;
}

void display(double x, double y){
    cout<<"display2"<<endl;
}

int display(double x, double y){
    cout<<"display3"<<endl;
    return 0;
}



int main(){
    
    // in java we do : Person parent  =  new Child();
    P1 *p1;
    P2  p2;
    p1 = &p2;

    // in java automatic runtime polymorphism is enabled

    // we have to make parents print function to be virtual for runtime polymorphism
    p1->print();


    //compiletime polymorphism
    display(10,10.0);
    display(10.0,10.0);//error because of wrong method overloading


    return 1;
}