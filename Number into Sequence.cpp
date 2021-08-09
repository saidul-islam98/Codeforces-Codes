#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,z;
        cin>>n;
        z=n;
        int mxcnt=1;
        for(int i=2;i<=sqrt(n);i++){
            int cnt=0;
            long long int x=n;
            while(x%i==0){
                cnt++;
                x=x/i;
            }
            if(cnt>mxcnt){
                mxcnt=cnt;
                z=i;
            }
        }

        cout<<mxcnt<<'\n';
        for(int i=1;i<mxcnt;i++){
            cout<<z<<' ';
            n/=z;
        }
        cout<<n<<'\n';
    }
    return 0;
}
