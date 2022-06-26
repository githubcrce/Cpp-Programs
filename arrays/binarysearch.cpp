#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int binarySearch(int a[],int n,int key){

    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid =  s + (e-s)/2;
        if(a[mid]==key){
            return mid;
        }

        if(a[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }

    return -1;
}


int main(){
    int n;
    cout<<"enter size"<<endl;
    cin >> n;
    int a[n];
    cout<<"enter array"<<endl;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int key;
    cout<<"enter key"<<endl;
    cin >> key;

    int ind = binarySearch(a,n, key);

    cout<<ind<<endl;

}