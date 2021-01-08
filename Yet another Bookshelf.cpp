#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,curr,cnt=0;
        cin>>n;
        int a[n+1];

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }


        int idxf, idxl;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                idxf=i;
                break;
            }
        }

        for(int i=n;i>=idxf;i--){
            if(a[i]==1){
                idxl=i;
                break;
            }
        }

        if(idxf==idxl) cout<<0<<'\n';
        else{
            for(int i=idxf;i<idxl;i++){
                if(a[i]==0) cnt++;
            }
            cout<<cnt<<'\n';
        }
    }
    return 0;
}
