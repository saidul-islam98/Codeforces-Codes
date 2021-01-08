#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n==1){
        cout<<1<<'\n'<<s;
    }
    else if(n==2){
        if(s[0]==s[1])
            cout<<1<<'\n'<<s;
        else
            cout<<2<<'\n'<<s[0]<<" "<<s[1];
    }
    else{
        int cntz=0,cnto=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') cntz++;
            else cnto++;
        }

        string ss="",st="";
        if(cntz==cnto){
            ss+=s[0];
            for(int i=1;i<s.length();i++){
                st+=s[i];
            }
            cout<<2<<'\n'<<ss<<" "<<st;
        }
        else{
            cout<<1<<'\n'<<s;
        }
    }
    return 0;
}
