#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,t,cnt=0;
    cin>>n>>k;

    t=n;
    while(t--){
        int cntl=0;
        string s;
        cin>>s;

        for(int i=0;i<s.length();i++){
            if(s[i]=='4' || s[i]=='7'){
                cntl++;
            }
        }
        if(cntl<=k){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
