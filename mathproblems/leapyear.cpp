#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
    int year;
    cin>>year;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"leap year";
            }
            else{
                cout<<"not leap year";
            }
        }
        else{
            cout<<"leap year";
        }
    }
    else{
        cout<<"not leap year";
    }
    return 1;
}