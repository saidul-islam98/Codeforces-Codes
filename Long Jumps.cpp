#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n],dp[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=n-1;i>=0;i--){
            dp[i]=a[i];
            int j=i+a[i];
            if(j<n){
                dp[i]+=dp[j];
            }
        }

        int mx=*max_element(dp,dp+n);
        cout<<mx<<'\n';
    }

    return 0;
}
