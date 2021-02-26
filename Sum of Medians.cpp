#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        long long int a[n*k+1],sum=0;
        for(int i=1;i<=n*k;i++){
            cin>>a[i];
        }

        if(n==1){
            for(int i=1;i<=n*k;i++){
                sum+=a[i];
            }
        }
        else if(n==2){
            for(int i=1;i<=n*k-1;i+=2){
                sum+=a[i];
            }
        }
        else{
            int o=(n+1)/2-1;
            o=n-o;
            int p=k*n+1;
            while(k--){
                p-=o;
                if(p<=0)
                    break;
                sum+=a[p];
            }
        }

        cout<<sum<<'\n';
    }
    return 0;
}
