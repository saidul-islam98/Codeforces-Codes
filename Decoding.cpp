#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(n<=2){
        cout<<s;
    }
    else if(n==3){
        string st="";
        st+=s[1];
        st+=s[0];
        st+=s[2];
        cout<<st;
    }
    else{
        if(n%2==0){
            string st="";
            for(int i=n-2;i>=0;i-=2){
                st+=s[i];
            }
            for(int i=1;i<n;i+=2){
                st+=s[i];
            }
            cout<<st;
        }
        else{
            string st="";
            for(int i=n-2;i>=1;i-=2){
                st+=s[i];
            }
            for(int i=0;i<n;i+=2){
                st+=s[i];
            }
            cout<<st;
        }
    }
    return 0;
}
