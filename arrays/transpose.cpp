#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
   int a[3][3], transpose[3][3], n, m, i, j;

   cout << "Enter ns and ms of matrix: ";
   cin >> n >> m;

   cout << "\nEnter elements of matrix: " << endl;


   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }


   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cout << " " << a[i][j];
         
       
      }
        cout << endl << endl;
   }

   // Computing transpose of the matrix
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) {
         transpose[j][i] = a[i][j];
      }

   // Printing the transpose
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) {
         cout << " " << transpose[i][j];
         if (j == n - 1)
            cout << endl << endl;
      }

   return 0;
}