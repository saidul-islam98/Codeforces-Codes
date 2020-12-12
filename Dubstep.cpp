#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,st;
    cin>>s;

    int flag=0, flag2=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            flag=1;
        }
        if(flag==1){
            s[i]='#';
            s[i+1]='#';
            s[i+2]='*';
            i=i+2;
            flag=0;
        }
    }

    for(int i=0;i<s.length();i++){
        if(s[i]!='#' && s[i]!='*'){
            cout<<s[i];
            flag2=1;
        }
        if(flag2==1 && s[i]=='*'){
            cout<<" ";
            flag2=0;
        }
    }

    return 0;
}
