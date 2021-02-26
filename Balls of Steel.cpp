#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int a[n][2],res=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }

        int mx,x1,y1,x2,y2,diff;
        for(int i=0;i<n;i++){
            x1=a[i][0];
            y1=a[i][1];
            mx=0;
            for(int j=0;j<n;j++){
                x2=a[j][0];
                y2=a[j][1];
                mx=max(mx,abs(x1-x2)+abs(y1-y2));
            }
            if(mx<=k){
                res=1;
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}
