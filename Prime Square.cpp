#include<bits/stdc++.h>

using namespace std;

bool Prime(int n){
    bool isPrime=true;

    if(n==0 || n==1){
        isPrime=false;
    }
    else{
        for(int i=2;i<=n/2;++i){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    return isPrime;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(Prime(n)){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<1<<' ';
                }
                cout<<'\n';
            }
            cout<<'\n';
        }
        else{
            int a[n][n];
            memset(a,0,sizeof(a));
            for(int i=0;i<n;i++){
                a[i][i]=1;
                a[i][n-i-1]=1;
            }
            if(n%2!=0){
                a[n/2-1][n/2]=1;
                a[n/2][n/2+1]=1;
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<' ';
                }
                cout<<'\n';
            }
            cout<<'\n';
        }
    }
    return 0;
}
