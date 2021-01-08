#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if(x==1){
            int total=a[x];
            int right=total-y;
            a[x+1]=a[x+1]+right;
            a[x]=0;
        }
        else if(x==n){
            int total=a[x];
            int left=y-1;
            a[x-1]=a[x-1]+left;
            a[x]=0;
        }
        else{
            int total=a[x];
            int left=y-1;
            int right=total-y;
            a[x-1]=a[x-1]+left;
            a[x+1]=a[x+1]+right;
            a[x]=0;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<'\n';
    }
    return 0;
}
