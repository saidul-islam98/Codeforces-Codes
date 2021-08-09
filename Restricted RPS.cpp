#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,r,p,s,k;
        cin>>n>>r>>p>>s;

        k=(n+1)/2;

        string st;
        cin>>st;

        int cnt=0;

        for(int i=0;i<n;i++){
            if(st[i]=='R' && p>0){
                st[i]='P';
                cnt++;
                p--;
            }
            else if(st[i]=='P' && s>0){
                st[i]='S';
                cnt++;
                s--;
            }
            else if(st[i]=='S' && r>0){
                st[i]='R';
                cnt++;
                r--;
            }
            else{
                st[i]='0';
            }
        }

        for(int i=0;i<n;i++){
            if(st[i]=='0'){
                if(r){
                    st[i]='R';
                    r--;
                }
                else if(p){
                    st[i]='P';
                    p--;
                }
                else{
                    st[i]='S';
                    s--;
                }
            }
        }


        if(cnt>=k){
            cout<<"YES\n"<<st<<'\n';
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
