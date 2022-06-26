#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //find minimum element place it at the begining

    for(int i=0; i < n-1; i++){
        int min = a[i];
        int minIndex = i;

        for(int j=i+1; j < n; j++){
            if(a[j]<min){
                min =  a[j];
                minIndex = j;
            }
        }
        int temp =  a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
    return 1;
}