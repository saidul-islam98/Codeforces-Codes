#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        long long int a[n],b[m]={0},res=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]%=m;
            b[a[i]]++;
        }

        if(b[0]){
            res++;
        }

        for(int i=1;i<m;i++){
            if(b[i]){
                if(abs(b[i]-b[m-i])<=1){
                    res++;
                }
                else{
                    res+=abs(b[i]-b[m-i]);
                }
                b[m-i]=0;
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}
