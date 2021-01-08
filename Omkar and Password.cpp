#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,cnt=1;
        cin>>n;

        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                cnt++;
            }
            else{
                cnt=1;
            }
        }

        if(cnt==n)
            cout<<cnt<<'\n';
        else
            cout<<1<<'\n';
    }
    return 0;
}
