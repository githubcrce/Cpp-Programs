#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];

    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        maxNum = max(maxNum,a[i]);
        minNum = min(minNum,a[i]);
    }

    cout<<maxNum<<" "<<minNum<<endl;
    return 1;
}