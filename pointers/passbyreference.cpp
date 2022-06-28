#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a,b;
    a = 9;
    b = 10;
    swap(&a,&b);
    cout<<a<<":"<<b<<endl;
    return 1;
}