#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[2] = {9,10};
    int *p = a;
    cout<<*p<<": "<<a[0]<<endl;
    cout<<p<<":"<<a<<":"<<&a[0]<<endl;

    //increment
    cout<<*(p+1)<<": "<<a[1]<<endl;

    int* arr = new int[3];
    arr[0] =10; 
    cout<< arr[0];
    return 1;
}
