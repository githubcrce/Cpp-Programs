#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

void sieve(int n){
    bool arr[n+1];
    memset(arr, false, sizeof(arr));

    for(int p=2;p*p<=n;p++){
        if(!arr[p]){
            for(int i=p*p;i<=n;i+=p){
                arr[i] =  true;
            }
        }
    }


    for(int i=2;i<=n;i++){
        if(!arr[i]){
            cout << i << endl;
        }
    }
}


int main(){


    printf("inside the main");

    sieve(50);
    return 1;
}