#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n],x=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        a[i]+=x;
        x=max(a[i],x);
        cout<<a[i]<<' ';
    }
    return 0;
}
