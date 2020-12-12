#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,mx=-99999,cnt=0;
    cin>>n;
    k=n;
    int v[1005];

    for(int i=0;i<1005;i++){
        v[i]=0;
    }
    while(n--){
        int val;
        cin>>val;
        v[val]++;
    }

    for(int i=0;i<1005;i++){
        if(v[i]>mx){
            mx=v[i];
        }
    }

    if(mx+mx-1<=k){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}
