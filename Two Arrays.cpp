#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,T,md=0;
        cin>>n>>T;
        for(int i=0;i<n;i++){
            int x,z;
            cin>>x;

            if((1&~T) && x==T/2)
                z=(md++)%2;
            else if(x<=T/2)
                z=1;
            else
                z=0;
            cout<<z<<" \n"[i==n-1];
        }
    }
    return 0;
}
