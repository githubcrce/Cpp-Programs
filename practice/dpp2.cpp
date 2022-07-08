#include<iostream>
using namespace std;


int main(){
    int* arr =  new int[2];
    arr[0] = 1;
    arr[1] = 2;
    cout << arr[0] << " " << arr[1] <<endl;

    int arr2[2];
    arr2[0] = 1;
    arr2[1] = 2;
    cout << arr2[0] << " " << arr2[1]<<endl;

    int *p = arr;
    cout <<*(p+1)<<" "<<*(arr+1)<<endl;

    int *p2 = arr2;
    cout <<*(p2+1)<<" "<<*(arr2+1)<<endl;

    // p++; p2++;
    // cout << *(p)<<" "<<*(p2)<<endl;


    int **q = &p;
    cout << *(q)<<" : "<<arr<<endl;
    return 1;
}