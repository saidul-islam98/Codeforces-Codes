#include<bits/stdc++.h>   ///AC Solution

using namespace std;

int main(){
    int cntodd=0;
    string s;
    cin>>s;
    int c[126];
    for(int i=0;i<126;i++){
        c[i]=0;
    }

    for(int j=0;j<s.length();j++){
        c[(int)s[j]]++;
    }

    for(int i=0;i<126;i++){
        if(c[i]>0 && c[i]%2!=0){
            cntodd++;
        }
    }

    if(cntodd==0 || cntodd==1){
        cout<<"First";
    }
    else if(cntodd%2==0){
        cout<<"Second";
    }
    else{
        cout<<"First";
    }

    return 0;
}
