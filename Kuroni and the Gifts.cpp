#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<'\n';
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
