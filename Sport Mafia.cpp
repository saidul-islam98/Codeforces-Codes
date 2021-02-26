#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    long long int i;
    for(i=1;i<=n;i++){
        long long int x=i*(i+1);
        x=x/2;
        if(x-(n-i)==k)
            break;
    }
    cout<<n-i;

    return 0;
}
