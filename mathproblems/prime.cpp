#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int num;
    cout<<"please enter a number"<<endl;
    cin>>num;

    /*brute force*/
    int flag = 0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }


    if(flag==1){
        cout<<"Non prime"<<endl;
    }else{
        cout<<"prime"<<endl;
    }


    /*optimal*/
    flag = 0;
   
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }

   if(flag==1){
    cout<<"Non prime"<<endl;
   }else{
    cout<<"prime"<<endl;
   }


    return 0;
}