#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }


    for(int i=1;i<=n;i++){
        if(a[i]%2==0) a[i]-=1;
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
