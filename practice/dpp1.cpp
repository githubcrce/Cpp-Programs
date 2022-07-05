#include<iostream>
using namespace std;

class A{

public:
    string name;
    int age;

    A(string name, int age) {
        this->name = name;
        this->age =  age;
    }


    A(A &a){
        this->name = a.name;
        this->age = a.age;
    }

    const operator == (A &a){
        return this->name == a.name && this->age == a.age;
    }

    void display(){
        cout << "name: " << this->name <<"age: "<<this->age <<endl;
    }

};

class Vehicle{
public:
    int speed;
    string name;

    Vehicle(string name, int speed){
        this->name = name;
        this->speed = speed;
    }


    virtual void display(){
        cout<<"name: "<<this->name<< "speed: "<<this->speed<<endl;
    }

    virtual void move(int acceleration)=0;

};


class Toyota: public Vehicle{

public:
    Toyota(string name, int speed): Vehicle(name, speed){
        
    }

    void display(){
        cout<<"Toyota : name: "<<this->name<< "speed: "<<this->speed<<endl;
    }

    void move(int acceleration){
        cout << this->speed+acceleration<<endl;
    }
};

int main(){

    A a("raj",12);
    A a1("rishabh",23);

    if(a==a1){
        cout << "same"<<endl;
    }else{
        cout<<"not same"<<endl;
    }

    a.display();
    a = a1;
    a.display();


    Vehicle *v;
    Toyota  toyota("toyo",123);
    v =  &toyota;

    v->display();
    v->move(12);
    return 1;
}