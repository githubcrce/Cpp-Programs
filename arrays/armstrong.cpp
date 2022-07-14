#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){

    int num;
    cin >> num;

    int n = 0;

    int temp = num;

    while(temp != 0){
        temp = temp/10;
        n++;
    }

    temp = num;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int prod = 1;
        int t =  temp%10;
        for(int j = 0; j < n; j++){
            prod *=t;
        }

        sum += prod;
        temp = temp/10;
    }


    if(sum == num){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }


    return 0;
}