#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    if(b==0){
        return a;
    }
    
    return gcd(b,a%b);
}

int main(){
    int a,b;

    cin>>a>>b;

    int gcd_ans =  gcd(a,b);
    int lcm_ans =  (a*b)/gcd_ans;
    cout<<"gcd_ans: "<<gcd_ans<<endl;
    cout<<"lcm_ans: "<<lcm_ans<<endl;
}