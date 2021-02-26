#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n][m],mn=99999999,cntneg=0,cntz=0,sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                sum+=abs(a[i][j]);
                mn=min(mn,abs(a[i][j]));
                if(a[i][j]<0)
                    cntneg++;
                if(a[i][j]==0)
                    cntz++;
            }
        }

        if(cntz>0 || cntneg%2==0)
            cout<<sum<<'\n';
        else
            cout<<sum-2*mn<<'\n';
    }
    return 0;
}
