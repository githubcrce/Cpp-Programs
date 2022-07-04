#include<iostream>
using namespace std;

/*
Abstraction means displaying only essential information and hiding the details.
*/
class parent{
protected:
    string name;

public:
    parent(string name){
        this->name = name;
    }
    virtual void displayname()=0;//this is pure virtual function in java its abstract function
};


class child: public parent{
public:
    child(string name): parent(name){
       
    }

    // implementing pure virtual function is must
public:
    void displayname(){
        cout << name << endl;
    }
};

int main(){
    
    child child("raj");
    child.displayname();
    return 1;

}