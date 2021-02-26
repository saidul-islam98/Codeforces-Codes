#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    long long int a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=0;i<=n;i++){
        if(k-i>0)
            k=k-i;
        else{
            cout<<a[k];
            break;
        }
    }
    return 0;
}
