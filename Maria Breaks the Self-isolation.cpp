#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n],res=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        for(int i=n-1;i>=0;i--){
            if(a[i]<=i+1){
                res=i+2;
                break;
            }
        }

        cout<<res<<'\n';
    }
    return 0;
}
