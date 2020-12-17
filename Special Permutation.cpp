#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            a[i]=i;
        }
        for(int i=1;i<n;){
            swap(a[i],a[i+1]);
            i+=2;
        }
        if(n>2){
            swap(a[1],a[n]);
        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
