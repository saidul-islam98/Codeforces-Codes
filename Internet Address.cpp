#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    string fs="",proto="",dom="",con="";
    int idx;
    for(int i=0;i<s.length();i++){
        if(s[i]!='p'){
            fs+=s[i];
        }
        else if(s[i]=='p'){
            fs+=s[i];
            idx=i+1;
            break;
        }
    }

    bool pre=false;
    for(int i=idx;i<s.length();i++){
        if(s[i]=='r' && s[i+1]=='u' && pre==true){
            dom+=".ru";
            idx=i+2;
            break;
        }
        else{
            dom+=s[i];
            pre=true;
        }
    }
    for(int i=idx;i<s.length();i++){
        con+=s[i];
    }

    if(con.length()==0)
        fs=fs+"://"+dom;
    else
        fs=fs+"://"+dom+"/"+con;
    cout<<fs;
    return 0;
}
