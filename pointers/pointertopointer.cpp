#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[2] = {9,10};
    int *p = a;
    
    int **q = &p;
    cout<<*q<<":"<<p<<":"<<&p<<":"<<q<<endl;
    return 1;
}