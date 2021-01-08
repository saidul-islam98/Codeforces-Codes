#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=0,mx=0;
        bool flag=false;

        for(int i=0;i<s.length();i++){
            if(s[i]=='A' && i!=s.length()-1){
                flag=true;
            }
            if(flag==true){
                if(s[i]=='P'){
                    cnt++;
                }
                else{
                    if(mx<=cnt){
                        mx=cnt;
                    }
                    cnt=0;
                }
            }
        }

        if(mx<cnt) mx=cnt;

        if(flag==false) cout<<0<<'\n';
        else{
            cout<<mx<<'\n';
        }
    }
    return 0;
}
