#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a[26];
        memset(a,0,sizeof(a));

        string s;
        cin>>s;

        for(int i=0;i<s.length();i++){
            int x=int(s[i])-97;
            a[x]++;
        }

        int cnt=0;
        for(int i=0;i<26;i++){
            if(a[i]==1){
                if(a[i+1]==1){
                    cnt++;
                }
                else{
                    cnt++;
                    break;
                }
            }
        }

        if(cnt==s.length()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
