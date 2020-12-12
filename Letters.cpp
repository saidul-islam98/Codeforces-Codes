#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt=0, lt=0, n=2;

    string ns="";
    string ms="";

    getline(cin, ns);
    getline(cin, ms);

    for(int i=0;i<ms.length();i++){
        if(ms[i]!=' '){
            lt++;
        }
    }

    for(int i=0;i<ms.length();i++){
        if(ms[i]==' '){
            continue;
        }
        for(int j=0;j<ns.length();j++){
            if(ns[j]==' '){
                continue;
            }
            else if(ms[i]==ns[j]){
                ns[j]='#';
                cnt++;
                break;
            }
        }
    }

    if(cnt==lt){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
