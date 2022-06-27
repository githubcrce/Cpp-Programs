#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a =9;
    int *p = &a;
    cout<<*p<<": "<<a<<endl;
    cout<<p<<":"<<&a<<endl;
    return 1;
}
//----------------------------------------------------------------------------------------------
// 9: 9
// 0x61feb8:0x61feb8