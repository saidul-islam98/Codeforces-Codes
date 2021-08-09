#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s,st;
        cin>>s>>st;

        s+='0';
        st+='0';

        int cnt=0;
        bool match=true;
        for(int i=0;i<n;i++){
            cnt+=((s[i]=='1')-(s[i]=='0'));
            if((s[i]==st[i])!=(s[i+1]==st[i+1]) && cnt!=0){
                match=false;
                break;
            }
        }

        if(match){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
