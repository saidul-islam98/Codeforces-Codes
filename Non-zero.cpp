#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n],sum=0,cnt0=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                cnt0++;
            }
            sum+=a[i];
        }

        if(sum!=0 && cnt0==0){
            cout<<0<<'\n';
        }
        else if(sum==0 && cnt0==0){
            cout<<1<<'\n';
        }
        else if(sum!=0 && cnt0!=0){
            sum=sum+cnt0;
            if(sum!=0){
                cout<<cnt0<<'\n';
            }
            else{
                cout<<cnt0+1<<'\n';
            }
        }
        else{
            cout<<cnt0<<'\n';
        }
    }
    return 0;
}
