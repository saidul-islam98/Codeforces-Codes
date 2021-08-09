#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        long long int x,y,sub;
        cin>>x>>y;
        sub=y-x;
        for(int i=1;i<=sub;i++){
            if(sub%i){
                continue;
            }
            if(sub/i+1>n){
                continue;
            }
            long long int d=min((y-1)/i,n-1);
            long long int a1=y-d*i;
            for(int c=0;c<n;c++){
                cout<<a1+(c*i)<<' ';
            }
            cout<<'\n';
            break;
        }
    }
    return 0;
}
