#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;

        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        int x=n-2;
        while(k--){
            a[n-1]+=a[x];
            x--;
        }
        cout<<a[n-1]-0<<'\n';
    }


    return 0;
}
