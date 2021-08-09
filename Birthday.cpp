#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1);

    for(int i=1;i<=n;i++){
        if(i%2){
            cout<<a[i]<<' ';
        }
    }

    for(int i=n;i>=1;i--){
        if(i%2==0){
            cout<<a[i]<<' ';
        }
    }

    return 0;
}
