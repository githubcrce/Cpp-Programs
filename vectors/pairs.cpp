#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool customComparator(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}


int main(){

    int arr[] =  {10,9,11};
    int n =  (sizeof(arr)/sizeof(arr[0]));
    vector<pair<int,int>> v;
    
    for(int i=0;i<3;i++){
        v.push_back(make_pair(arr[i],i));
    }

    for( auto num:v){
        cout<<num.first<<" "<<num.second<<endl;
    }

    sort(v.begin(),v.end(),customComparator);

    for( auto num:v){
        cout<<num.first<<" "<<num.second<<endl;
    }
    return 1;
}