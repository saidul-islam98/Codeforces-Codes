#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    int mx=-1e8;
    sort(a,a+n);


    for(int i=0;i<n;i++){
        mx=max(mx,mp[a[i]]);
    }


    cout<<n-mx;
    return 0;
}
