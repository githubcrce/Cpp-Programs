#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
    int num;
    cin >> num;
    int rev = 0;
    while(num != 0){
        rev = rev * 10;
        rev = rev + num % 10;
        num = num / 10;
    }
    cout<<rev << endl;
    return 1;
}