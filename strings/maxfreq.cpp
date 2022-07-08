#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str =  "rishuuuikesh";
    int rep[26];
    for(int i=0;i<26; i++){
        rep[i] = 0;
    }

    int n =  str.size();

    for(int i=0;i<n; i++){
        rep[str[i]-'a']++;
    }

    char maxch = 'a';
    int maxFreq = rep[0];
    for(int i=0;i<26; i++){
        if(rep[i]>maxFreq){
            maxFreq = rep[i];
            maxch = i+'a';
        }
    }
    cout << maxch<<":"<<maxFreq<<endl;
    






    return 1;
}