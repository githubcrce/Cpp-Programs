#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str =  "RisHi";
    int n =  str.size();
    for(int i=0;i<n; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
        else{
            str[i] = str[i]+32;
        }
    }

    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
}