#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


class person{

    public:
    string name;
    int age;
    string address;

    person(){
        
    }

    person(string name, int age, string address){
        this->name = name;
        this->age = age;
        this->address = address;
    }

    void setName(string name){
        this->name = name;
    }

    void setAge (int age){
        this->age = age;
    }

    void setAddress(string address){
        this->address = address;
    }


    string getName(){
        return this->name;
    }

    int getAge(){
        return this->age;
    }

    string getAddress(){
        return this->address;
    }

    void printperson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
    }


    //copy constructor
    person(person  &p){
        this->name = p.name;
        this->age = p.age;
        this->address = p.address;
    }

    //operator overloading
    bool operator==(person &p){
        return this->name == p.name && this->age == p.age && this->address == p.address;
    }

    //destructor
    ~person(){
        cout<<"Destructor called"<<endl;
    }

};

int main(){

    person p1("John", 20, "Bangalore");
    p1.printperson();

    person p2;
    p2.printperson();

    if(p1 == p2){
        cout<<"Same person"<<endl;
    }
    else{
        cout<<"Different person"<<endl;
    }

    person p3 = p1;
    p3.printperson();
    return 1;
}