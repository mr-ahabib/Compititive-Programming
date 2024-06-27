#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){ // using t times test cases


       int digits;
       cin>>digits;
       int digits_sum=0;
       while(digits>0){ //running until non zero
        int last_digit= digits %10;  //finding last digit
         digits_sum=digits_sum+last_digit; //sum those digits
        digits=digits/10; //after sum, removing the last digit

       }
       cout<<digits_sum<<endl;


    }
}
