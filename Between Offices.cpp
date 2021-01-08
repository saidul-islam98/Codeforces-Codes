#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnts=0,cntf=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1] && s[i]=='F'){
            cntf++;
        }
        else if(s[i]!=s[i+1] && s[i]=='S'){
            cnts++;
        }
    }

    if(cnts>cntf){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
