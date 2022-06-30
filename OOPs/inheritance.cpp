#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


class Ground{
    int rooms;
protected:
    void put(){
        cout<<"Ground is put"<<endl;
    }
public:
    void get(){
        cout<<"Ground is get"<<endl;
    }
};

class Middle: private Ground{
    int labs;
public:
    void Take(){
        cout <<"Middle is take"<<endl;
    }

    void Give(){
        cout <<"Middle is give"<<endl;
    }
};


class Top: public Middle{
    int roof;
public:
    void In(){
        cout <<"Top is in"<<endl;
    }

    void Out(){
        cout <<"Top is out"<<endl;
    }

};


class p1{
public:
    void print(){
        cout<<"p1"<<endl;
    }
};


class p2{
public:
    void print(){
        cout<<"p2"<<endl;
    }
};


class p3: public p1, public p2{
public:
    
};

int main(){

    // members which are accessible by Middle
    Middle m;
    m.Take();
    m.put();//error because put was inherited as private member


    // members which are accessible by Top
    Top t;
    t.In();
    t.Take();
    t.put();//error because put is private member of Middle

    p3 p;
    p.print();// error ambiguous

    p.p1::print();
    p.p2::print();

}