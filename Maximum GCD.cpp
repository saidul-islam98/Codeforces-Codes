#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    if(a==b){
        return a;
    }

    if(a>b){
        return gcd(a-b,b);
    }

    return gcd(a,b-a);

}

int main(){
    int t,k;
    cin>>t;
    k=t;

    while(t--){
        int n,mx=-9999999;
        cin>>n;
        int a[n+1];
        a[0]=0;
        for(int i=1;i<=n;i++){
            a[i]=i;
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int x=gcd(a[i],a[j]);
                if(x>mx){
                    mx=x;
                }
            }
        }
        cout<<mx<<"\n";
    }

    return 0;
}
