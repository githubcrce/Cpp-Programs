#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int fact(int n){

    if(n==1){
        return 1;
    }

    return n*fact(n-1);
}

int nCr(int n,int r){
    int n_fact  =  fact(n);
    int n_minus_r_fact  =  fact(n-r);
    int r_fact = fact(r);

    return (n_fact)/(n_minus_r_fact*r_fact);
}


int main(){
    
    int n,r;
    cin>>n>>r;
    int ans = nCr(n,r);

    cout<<n<<"C"<<r<<": "<<ans<<endl;

    return 1;
}