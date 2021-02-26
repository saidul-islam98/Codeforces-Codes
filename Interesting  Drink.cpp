#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m=100005;
    cin>>n;

    int a[100005]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }

    for(int i=1;i<100005;i++){
        a[i]=a[i]+a[i-1];
    }

    int q;
    cin>>q;

    while(q--){
        long long int y;
        cin>>y;
        if(y>=m){
            cout<<a[m-1]<<'\n';
        }
        else{
            cout<<a[y]<<'\n';
        }
    }

    return 0;
}
