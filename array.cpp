//2D array

#include<bits/stdc++.h>
using namespace std;

int main(){
       int row,col;
       cin>>row>>col;
       int arr[row][col];

       //input
       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
       }


       //output
       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
       }


}
