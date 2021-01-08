#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int cnt=0;
    for(int j=n-1;j>=0;j--){
        for(int i=j-1;i>=0;i--){
            if(a[j]==a[i]){
                a[i]=-1;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>0) cnt++;
    }
    cout<<cnt<<'\n';

    for(int i=0;i<n;i++){
        if(a[i]>0) cout<<a[i]<<" ";
    }

    return 0;
}
