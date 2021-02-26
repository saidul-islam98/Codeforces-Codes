#include<bits/stdc++.h>

using namespace std;

int main(){
    int cntf=0,cnts=0;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='4'){
            cntf++;
        }
        else if(s[i]=='7'){
            cnts++;
        }
    }

    if(cntf==0 && cnts==0){
        cout<<-1;
    }
    else{
        if(cnts>cntf){
            cout<<7;
        }
        else{
            cout<<4;
        }
    }
    return 0;
}
