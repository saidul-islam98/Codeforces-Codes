#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    long long int rm,cnt=0;
    int dp[200]={0};
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        rm=(k-x%k)%k;
        //cout<<rm<<' '<<dp[rm]<<'\n';
        if(dp[rm]){
            //cout<<"here"<<'\n';
            dp[rm]--;
            cnt++;
        }
        else{
            dp[x%k]++;
        }
    }

    cout<<cnt*2;
    return 0;
}
