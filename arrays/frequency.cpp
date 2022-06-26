#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i < n;i++){
        cin>>a[i];
    }

    int max  =  a[0];

    for(int i=1; i < n; i++){
       if(a[i] > max){
        max = a[i];
       }
    }

    int rep[max+1];
    for(int i=0; i<=max; i++){
        rep[i] = 0;
    }

    for(int i=0; i<n; i++){
        rep[a[i]]++;
    }

    for(int i=0; i<=max; i++){
        if(rep[i]>=1){
            cout<<i<<":"<<rep[i]<<endl;
        }
    }

    return 0;
}