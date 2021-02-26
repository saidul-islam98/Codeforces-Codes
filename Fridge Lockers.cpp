#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(n<=2 || n!=m){
            cout<<-1<<'\n';
        }
        else{
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=2*a[i];
            }
            cout<<sum<<'\n';
            for(int i=1;i<n;i++){
                cout<<i<<' '<<i+1<<'\n';
            }
            cout<<n<<' '<<1<<'\n';
        }
    }
    return 0;
}
