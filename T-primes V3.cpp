#include<bits/stdc++.h>   ///AC Solution

using namespace std;

bool prime[1000001];

bool comp(long long int x){
    double sq=sqrt(x);
    if(floor(sq)!=sq){
        return false;
    }
    if(prime[(long long int)sq]){
        return false;
    }

    return true;
}

int main(){
    int t;
    cin>>t;

    memset(prime, false, sizeof(prime));
    prime[1]=true;

    for (int i=2;i<=1000;i++){
        if (prime[i]==false){
            for(int j=2;i*j<=1000000;j++){
                prime[i*j]=true;
            }
        }
    }

    while(t--){
        long long int x;
        bool flag=false;
        cin>>x;

        if(x==1){
            cout<<"NO\n";
            continue;
        }
        if(comp(x)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
