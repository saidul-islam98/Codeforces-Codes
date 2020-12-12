#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a[n+1],b[n+1];
    a[0]=0;
    b[0]=0;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b,b+n+1);

    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }

    int t;
    cin>>t;
    while(t--){
        int q,l,r;
        long long int cnt=0;
        cin>>q>>l>>r;
        if(q==1){
            cnt=a[r]-a[l-1];
        }
        else{
            cnt=b[r]-b[l-1];
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
