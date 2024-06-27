#include<bits/stdc++.h>
using namespace std;


int main(){
       string str;

       cin>>str;

        int last_Digit_Of_String= str[str.size()-1] - '0';  //ASCII value zero minus to find the int of last digit
         cout<<last_Digit_Of_String<<endl;
        int n;
        cin>>n;

        int sum=last_Digit_Of_String + n;

        str[str.size() - 1] = '0' + sum;
        cout<<"sum: "<<str;

}
