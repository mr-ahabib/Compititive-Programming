#include<bits/stdc++.h>
using namespace std;

int main(){
        string str;
        cin>>str;

        string reverse;

        for(int i=str.size()-1; i>=0; i--){  //reverse loop
            //reverse=reverse+str[i];//1st method but not proper method for time complexity

            reverse.push_back(str[i]);//another method best for time complexity
        }

        cout<<reverse<<endl;


        if(str==reverse){  //check pallinfrom
            cout<<"Pallindrom"<<endl;
        }else{
             cout<<"Not pallindrom"<<endl;

        }



}
