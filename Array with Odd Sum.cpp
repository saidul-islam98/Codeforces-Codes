#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,cntodd=0,cnteven=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2!=0){
                cntodd++;
            }
            else{
                cnteven++;
            }
        }
        if(cntodd==n && n%2==0){
            cout<<"NO\n";
        }
        else if(cnteven==n){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
