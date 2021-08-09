#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int z,o,n;
        cin>>z>>o;

        string s;
        cin>>s;

        bool isPossible=true;
        n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='?' && s[n-i-1]=='1'){
                s[i]='1';
            }
            if(s[i]=='?' && s[n-i-1]=='0'){
                s[i]='0';
            }
            if(s[i]=='0' && s[n-i-1]=='?'){
                s[n-i-1]='0';
            }
            if(s[i]=='1' && s[n-i-1]=='?'){
                s[n-i-1]='1';
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]=='1') o--;
            else if(s[i]=='0') z--;
        }

        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                if(n%2==1 && i==n/2){
                    if(z==1){
                        s[i]='0';
                        z--;
                    }
                    else if(o==1){
                        s[i]='1';
                        o--;
                    }
                    break;
                }

                if(z>=2){
                    s[i]='0';
                    s[n-i-1]='0';
                    z-= 2;
                }
                else if(o>=2){
                    s[i]='1';
                    s[n-i-1]='1';
                    o-=2;
                }
            }
        }

        if(z!=0 || o!=0) isPossible=false;

        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1])  isPossible=false;
            if(s[i]=='?') isPossible=false;
        }

        if(isPossible){
            cout<<s<<'\n';
        }
        else{
            cout<<"-1\n";
        }
    }

    return 0;
}
