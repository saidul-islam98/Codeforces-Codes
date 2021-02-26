#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m;
        k=n;
        bool flag=false;

        while(k--){
            int a[2][2];
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++)
                    cin>>a[i][j];
            }

            if(a[0][1]==a[1][0])
                flag=true;
        }

        if(m%2!=0)
            flag=false;

        if(flag==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
