#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n,greater<int>());

        bool flag=false;
        for(int i=0;i<n;i++){
            int z=a[i]+b[i];
            if(z>x){
                flag=true;
                break;
            }
        }

        if(flag==false){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
