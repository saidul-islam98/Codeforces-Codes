#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int cnt=0,mx=-99999999;
        bool flag=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                cnt++;
            }
            else{
                if(mx<cnt){
                    mx=cnt;
                }
                cnt=0;
            }
        }

        if(mx<cnt){
            mx=cnt;
        }
        cout<<mx+1<<'\n';
    }
    return 0;
}
