#include<iostream>
using namespace std;
/*
Encapsulation is defined as binding together the data and 
the functions that manipulates them. 
*/

class Encapsulation{
private:
    string name;

public:
    void setGreetName(string name){
        this->name = name;
    }

    string getGreetName() {
        return this->name;
    }
};

int main(){

    Encapsulation encapsulation;
    encapsulation.setGreetName("raj");
    cout << encapsulation.getGreetName();

    return 1;
}