#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int b[n+1];
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }

    long long int sum=abs(b[1]);
    for(int i=2;i<=n;i++){
        sum+=abs(b[i]-b[i-1]);
    }

    cout<<sum;
    return 0;
}
