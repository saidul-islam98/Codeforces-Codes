#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,cnt=0;
        cin>>n>>m;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        for(int i=1;i<n;i++){
            cnt+=((m-a[i])/a[0]);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
