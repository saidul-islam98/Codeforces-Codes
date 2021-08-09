#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n;

        n+=2;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        bool found=false;

        long long int sum=0;

        for(int i=0;i<n-2;i++){
            sum+=a[i];
        }

        if(sum==a[n-2] || sum==a[n-1]){
            for(int i=0;i<n-2;i++){
                cout<<a[i]<<' ';
            }
        }
        else{
            for(int i=0;i<n-2;i++){
                if(sum-a[i]+a[n-2]==a[n-1]){
                    k=i;
                    found=true;
                    break;
                }
            }

            if(found==false){
                cout<<"-1";
            }
            else{
                for(int i=0;i<n-1;i++){
                    if(i!=k){
                        cout<<a[i]<<' ';
                    }
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}
