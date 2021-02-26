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
            cin>>a[i];
        }

        bool isPdm=false;
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int k=j+1;
                if(a[i]==a[k]){
                    isPdm=true;
                    break;
                }
            }
            if(isPdm)
                break;
        }

        if(isPdm)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
