#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n+1],pos[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            pos[x]=1;
        }

        while(1){
            bool isPossible=false;
            for(int i=1;i<=n;i++){
                if(pos[i] && a[i]>a[i+1]){
                    isPossible=true;
                    swap(a[i],a[i+1]);
                }
            }
            if(isPossible==false)
                break;
        }

        bool isSortable=true;
        for(int i=1;i<n;i++){
            if(a[i]>a[i+1]){
                isSortable=false;
                break;
            }
        }

        if(isSortable)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
