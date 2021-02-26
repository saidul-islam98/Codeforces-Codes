#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,sum=0;
    cin>>n>>k;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        int kp=a[i]+a[i-1];
        if(kp<k){
            sum+=(k-kp);
            a[i]+=(k-kp);
        }
    }

    cout<<sum<<'\n';
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
