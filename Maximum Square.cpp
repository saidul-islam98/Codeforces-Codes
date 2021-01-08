#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,sq;
        cin>>n;
        k=n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int j=0;j<n;j++){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(a[i]>=k){
                    cnt++;
                }
            }
            if(cnt>=k){
                sq=k;
                break;
            }
            k--;
        }
        cout<<sq<<'\n';
    }
    return 0;
}
