#include<bits/stdc++.h>
using namespace std;

int main(){
      string str1, str2;

      cin>> str1>>str2;

      if(str1==str2){ //equality check
        cout<<"equal"<<endl;
      }
      else{
        cout<<"not equal"<<endl;
      }

      for (int i=0; i<=str1.size(); i++){ //find every character
        cout<<str1[i]<<endl;
      }

}
