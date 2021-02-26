#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        sort(a+1,a+n+1);
        bool flag=true;
        for(int i=1;i<n;i++){
            if(a[i]==a[i+1]){
                flag=false;
                break;
            }
        }

        if(flag==true){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
