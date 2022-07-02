#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



class Stack{

public:
    int *arr;
    int top;
    int n =  2;
    Stack(){
        arr = new int[n];
        top = -1;
    }

    int pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            int temp = arr[top];
            top--;
            return temp;
        }
    }
    
    int push(int num){
        if(top == n-1){
            cout<<"Stack is full"<<endl;
            return -1;
        }
        else{
            if(top == n-2){
                incrementCapacity();
            }
            top++;
            arr[top] = num;
            return num;
        }
    }

    int empty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int incrementCapacity(){
        int *temp = new int[n*2];
        for(int i=0;i<n;i++){
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        n = n*2;
        return n;
    }

    int size(){
        return top+1;
    }
};
int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    for(int i=0;i<100;i++){
        st.push(i);
    }
    cout << st.size() << endl;
    cout<<st.pop()<<endl;
    cout<<st.empty()<<endl;
    return 1;
}