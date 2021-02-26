#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,q,k;
        cin>>n>>q;
        k=q;
        string s;
        cin>>s;

        while(k--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;

            bool flag=true;
            for(int i=0;i<l && flag;i++){
                if(s[i]==s[l]){
                    flag=false;
                }
            }
            for(int i=r+1;i<n && flag;i++){
                if(s[i]==s[r]){
                    flag=false;
                }
            }

            if(flag){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
    return 0;
}
