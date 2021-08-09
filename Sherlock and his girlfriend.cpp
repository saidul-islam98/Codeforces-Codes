#include<bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(bool *prime, int n){

    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }
}


int main(){
    int n;
    cin>>n;

    bool prime[n+2];
    memset(prime,true,sizeof(prime));

    SieveOfEratosthenes(prime,n+2);

//    for(int i=2;i<n+2;i++){
//        if(prime[i]){
//            cout<<i<<':'<<' '<<"prime"<<'\n';
//        }
//        else{
//            cout<<i<<':'<<' '<<"non-prime"<<'\n';
//        }
//    }

    if(n==1)
        cout<<1<<'\n'<<1;
    else if(n==2)
        cout<<1<<'\n'<<1<<' '<<1;
    else{
        cout<<2<<'\n';
        for(int i=0;i<n;i++){
            if(prime[i+2]){
                cout<<1<<' ';
            }
            else{
                cout<<2<<' ';
            }
        }
    }

    return 0;
}
