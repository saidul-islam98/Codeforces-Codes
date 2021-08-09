#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int a[n],diff;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool isPossible=true;
        for(int i=0;i<n-1;i++){
            diff=max(0,a[i+1]-k);
            m+=max(0,a[i]-diff);

            if(a[i+1]-a[i]>k){
                m-=a[i+1]-a[i]-k;
            }
            if(m<0){
                isPossible=false;
                break;
            }
        }

        if(isPossible){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
