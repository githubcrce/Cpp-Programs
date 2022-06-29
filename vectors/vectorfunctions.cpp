#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int> v;

    for(int i=0;i<10;i++){
        v.push_back(i);
    }

    for( auto num:v){
        cout<<num;
    }
    cout<<endl;
    v.pop_back();

    for( auto num:v){
        cout<<num;
    }
    cout<<endl;
    v.insert(v.begin()+1,10);
    for( auto num:v){
        cout<<num;
    }
    cout<<endl;

    v.erase(v.begin()+1);
    for( auto num:v){
        cout<<num;
    }
    return 1;
}