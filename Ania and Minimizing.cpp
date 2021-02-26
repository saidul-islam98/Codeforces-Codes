#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    if(n==1 && k>0){
        cout<<0;
    }
    else if(k==0){
        cout<<s;
    }
    else{
        if(s[0]!='1'){
            s[0]='1';
            k--;
            for(int i=1;k>0 && i<n;i++){
                if(s[i]!='0'){
                    s[i]='0';
                    k--;
                }
            }
        }
        else{
            for(int i=1;k>0 && i<n;i++){
                if(s[i]!='0'){
                    s[i]='0';
                    k--;
                }
            }
        }
        cout<<s;
    }
    return 0;
}
